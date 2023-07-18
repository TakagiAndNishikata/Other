BEGIN{DE="Database Entry:"}
/^End of/ {next}
/Ship's Database - Dilithium/ {$0 = DE" "$NF}
/Deep Space Hibernation:|Weapons System:/{split($0, A, ": ");DB[DE" "A[1]":"] = A[2]"\n";}
/Log, Day/ {sub(/Log,/, "Log - Mission");}
/, Supplemental/ { sub(/, Supplemental/, " - Mission Day 113, Supplemental");}
/^Database|^Captain's Log/ { K = $0":"; DB[K] = ""; getline}
/^User/ {K = ""}
K != "" {DB[K] = DB[K]"\n"$0}
END {for (entry in DB) {print entry"\n"DB[entry]; print "------------------------" } }
