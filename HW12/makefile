
all : MyProj

MyProj : main.o 
	gcc -o MyProj main.o 

main.o : main.c
	gcc -c main.c -o main.o

clean : 
	del *.o
	del MyProj.exe