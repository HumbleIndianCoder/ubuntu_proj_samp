#VPATH = src
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin



all: main.exe

main.exe: main.o
	gcc -o main.exe main.o

main.o: src/main.c
	gcc -c src/main.c

clean:
	rm main.o main.exe

