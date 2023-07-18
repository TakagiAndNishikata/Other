#!/usr/bin/tcsh
./tester.csh $1 | sort | ./PA4.sed | tr \\n , | sed 's/,\([^,]*\),$/: \1!\n/'
