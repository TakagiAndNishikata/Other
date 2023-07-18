#!/usr/bin/tcsh
cd $1
ls ?? | xargs -l fgrep ../allcards -e | cut --complement -c1-2
ls ?H |& fgrep -v : | wc -l > ___tempfile1
ls ?C |& fgrep -v : | wc -l >> ___tempfile1
ls ?D |& fgrep -v : | wc -l >> ___tempfile1
ls ?S |& fgrep -v : | wc -l >> ___tempfile1
fgrep 5 ___tempfile1 > /dev/null && echo Flush!
ls [2-9][HCDS] |& fgrep -v : | cut -c1 > faces
ls [TJQKA][HCDS] |& fgrep -v : | cut -c1 | tr "TJQKA" "01234" | cat -n | tr "\t" "1" | tr -d " " | cut --complement -c1 >> faces
cat faces | sort -g | uniq -c | cut -c7 > facecounts
expr `wc -l < facecounts` == 4 > /dev/null && echo One pair!
(expr `wc -l < facecounts` == 3 && expr `cat facecounts | sort -rg | head -1` == 2) > /dev/null && echo Two pair!
(expr `wc -l < facecounts` == 3 && expr `cat facecounts | sort -rg | head -1` == 3) > /dev/null && echo Three of a kind!
(expr `wc -l < facecounts` == 2 && expr `cat facecounts | sort -rg | head -1` == 4) > /dev/null && echo Four of a kind!
(expr `wc -l < facecounts` == 2 && expr `cat facecounts | sort -rg | head -1` == 3) > /dev/null && echo Full house!
(expr `wc -l < facecounts` == 5 && expr `cat faces | sort -g | tail -1` - `cat faces | sort -g | head -1` == 4) > /dev/null && echo Straight!
(expr `wc -l < facecounts` == 5 && expr `cat faces | sort -g | tail -1` == 14 && expr `cat faces | sort -g | head -1` == 2 && expr `cat faces | sort -g | tail -2 | head -1` == 5) > /dev/null && echo Straight!
