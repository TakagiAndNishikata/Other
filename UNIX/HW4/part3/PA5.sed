#!/usr/bin/sed -nf

# line 11~16
H; s/..//p; g; s/\([2-9TJQKA][DCHS]\).\[.*/\1/; h

# line 20
g

# line 22
:J;tJ

# line 24
s/..\([DCHS]\).*\1.*\1.*\1.*\1/Flush/p

# line 29, 31
s/...*\([2-9TJQKA]\).*\1.*\1.*\1./Four of a kind/p
s/.\([2-9TJQKA]\).*\1.*\1.*\1.*../Four of a kind/p

# line 44
/^\(.[2-9TJQKA][DCHS]\)\{,4\}$/ d

# line 49~51
/Flush/ q; /Four/ q

# line 58~60 remove suit
s/[^2-9TJQKA]//g

# line 65 branch
/\([2-9TJQKA]\)\1\1/ !bK

	# line 71
	/\([2-9TJQKA]\)\1.\([2-9TJQKA]\)\2/ cFull house

	# line 73
	cThree of a kind

# line 76 label
:K

# line 82 branch
/\([2-9TJQKA]\)\1/ !bL

	# line 88
	/.*\([2-9TJQKA]\)\1.*\([2-9TJQKA]\)\2/ cTwo Pairs

	# line 90
	cOne pair

# line 93 label
:L

# line 97 straight
s/$/_23456789T/

# line 101
/\(.....\).*\1/ cStraight

# line 104
s/2345A.*/Straight/p

# line 108
s/[A9]JKQT.*/Straight/p

# line 111
s/89JQT.*/Straight/p

# line 114
s/789JT.*/Straight/p

# line 117
s/[0-9TQJKA]*_[0-9TQJKA]*/Nothing/p
