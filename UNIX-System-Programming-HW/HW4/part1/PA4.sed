#!/usr/bin/sed -nf
H; s/..//p; g
s/\([0-9TJQKA][DCHS]\).\[.*/\1/; h
g
s/..\([DCHS]\).*\1.*\1.*\1.*\1/Flush/p
s/...*\([0-9TJQKA]\).*\1.*\1.*\1./Four of a kind/p
s/.\([0-9TJQKA]\).*\1.*\1.*\1.*../Four of a kind/p
