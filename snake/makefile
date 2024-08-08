
all : MyProj

MyProj : main.o
	gcc  -o MyProj.exe main.o  C:\PDCurses-3.9\wincon\pdcurses.a -I C:\PDCurses-3.9 

main.o : main.c
	gcc -I C:\PDCurses-3.9 -c main.c -o main.o

clean : 
	del *.o
	del MyProj.exe
