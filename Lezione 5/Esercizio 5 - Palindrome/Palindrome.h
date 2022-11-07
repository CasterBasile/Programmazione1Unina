#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Palindrome{
    public:
        Palindrome(string &);
        void setLength();
        void checkPalindrome();
        void risultato();
    private:
        string n;
        int l, i=0;
        bool v;
};