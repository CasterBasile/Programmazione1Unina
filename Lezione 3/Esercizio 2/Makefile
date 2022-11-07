esegui: main.o palindrome.o
	g++ -o esegui main.o palindrome.o 
main.o: main.cpp palindrome.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
palindrome.o: palindrome.cpp palindrome.h
	g++ -c palindrome.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
