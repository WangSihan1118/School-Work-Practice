Lib:main.o Book.o Library.o
	g++ main.o Book.o Library.o -o Lib

main.o:main.cpp
	g++ -c main.cpp -o main.o

Book.o:Book.cpp Book.h
	g++ -c Book.cpp -o Book.o

Library.o:Library.cpp Library.h
	g++ -c Library.cpp -o Library.o
