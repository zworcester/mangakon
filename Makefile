CC=g++
FLGS=-g -lnotcurses-core -lnotcurses -lnotcurses++
OUT=mangaterm
IN=*.cpp

dbg:
	$(CC) $(IN) $(FLGS) -o $(OUT)
