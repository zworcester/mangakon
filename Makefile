CC=g++
FLGS=-g -lnotcurses-core -lnotcurses -lnotcurses++
OUT=mangakon
IN=*.cpp

dbg:
	$(CC) $(IN) $(FLGS) -o $(OUT)
