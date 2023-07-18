#!/usr/bin/tcsh
sed -n 20,24p<allcards |./PA4.sed |tr \\n , |sed 's/,$/\n\n/'
sed -n 23,27p<allcards |./PA4.sed |tr \\n , |sed 's/,$/\n\n/'
sed -n '1p;7p;20p;33p;46p'<allcards |./PA4.sed |tr \\n , |sed 's/,$/\n\n/'
sed -n '7p;20p;33p;46p;48p'<allcards |./PA4.sed |tr \\n , |sed 's/,$/\n\n/'
sed -n '7p;20p;33p;35p;48p'<allcards |./PA4.sed |tr \\n , |sed 's/,$/\n\n/'
sort -R allcards | head -5 | sort -g |./PA4.sed |tr \\n , |sed 's/,$/\n\n/'
