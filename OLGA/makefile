all: read.exe

clean:
	rm main.o input.o parse.o read.exe
	
read.exe: main.o
	g++ -g -o read main.o input.o parse.o
	
main.o:
	g++ -c -g main.cpp input.cpp parse.cpp