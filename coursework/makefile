
all : MyProj

MyProj : main.o temp_api.o
	gcc -o MyProj main.o temp_api.o

main.o : main.c
	gcc -c main.c -o main.o

temp_api.o : temp_api.c
	gcc -c temp_api.c -o temp_api.o

clean : 
	del *.o
	del MyProj.exe