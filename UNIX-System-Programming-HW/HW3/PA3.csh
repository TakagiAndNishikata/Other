#!/usr/bin/tcsh
set facecount=(0 0 0 0 0 0 0 0 0 0 0 0 0)
set suitcount=(0 0 0 0)
set suit=(♦ ♥ ♠ ♣)
foreach i ( `seq 0 51 | sort -R | head -5 | sort -g` )
	@ suitvar = 1 + $i / 13
	@ facevar = 1 + $i % 13
	echo -n \  `echo  $facevar | grep "1[0-3]" | cut -c2 | tr "0123" "JQKA" || expr $facevar + 1`$suit[$suitvar]
	@ facecount[$facevar]++
	@ suitcount[$suitvar]++
end
echo -n " : "
switch ( `echo $facecount | tr " " "\n" | sort -rg | tr -d " \n0"` )
case 41:
	echo Four of a kind! ;breaksw
case 32:
	echo Full house! ;breaksw
case 311:
	echo Three of a kind! ;breaksw
case 221:
	echo Two pair! ;breaksw
case 2111:
	echo One pair! ;breaksw
case 11111:
	
	set flush = ""
	if ( `echo "$suitcount" | fgrep 5 | tr -d "1234 "` ) set flush = \ Flush!
	if ( `echo $facecount`  =~ '*1 1 1 1 1*' ) then
		echo Straight$flush!
	else if ( `echo $facecount[1] $facecount[2] $facecount[3] $facecount[4] $facecount[13]`  == '1 1 1 1 1' ) then
		echo Straight$flush!
	else if ( $flush != "" ) then
		echo Flush!
	else
		foreach i ( `seq 13 -1 1` )
			if ( $facecount[$i] == 1 ) then
				switch ( $i )
				case 13:
					echo "Ace high!"
					break
				case 12:
					echo "King high!"
					break
				case 11:
					echo "Queen high!"
					break
				case 10:
					echo "Jack high!"
					break
				default:
					echo "`expr $i + 1` high!"
					break
				endsw
			endif
		end
	endif
endsw
