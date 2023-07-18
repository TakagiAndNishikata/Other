DB = "Database Entry: "
/^End of/ {next}
/Dylithium/ {sub(/^/ DE); sub(/:$/, ":"); print; next }
/Deep Space Hibernation:|Weapons System:/{split($0, A, ": "); DB[A[1]] = A[2]"\n"; next}
/Log, Day/ {sub(/Log,/, "Log -"); }
/, Supplemental/ {sub(/,/, " -"); }
/^Database|^Captain's Log/{ K = $0; DB[K] = ""; getline}
/^User/ {K = ""}
K != "" { { DB[K] = DB[K] "\n" $0 }
END { for (entry in DB) { print entry; print "------------------------" } }
