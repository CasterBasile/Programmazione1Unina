esegui: main.o Palindrome.o
	g++ -o esegui main.o Palindrome.o 
main.o: main.cpp Palindrome.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
Palindrome.o: Palindrome.cpp Palindrome.h
	g++ -c Palindrome.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
