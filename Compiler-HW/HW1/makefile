FILE_lex = B093040003
PROG_lex = lex.yy.c
all:	$(PROG_lex)
	gcc $(PROG_lex) -o $(FILE_lex) -lfl

$(PROG_lex):	$(FILE_lex).l
	flex $(FILE_lex).l

clean:
	rm $(FILE_lex) $(PROG_lex)
