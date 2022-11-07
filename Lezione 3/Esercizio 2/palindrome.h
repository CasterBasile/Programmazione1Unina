#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Palindrome{
    public:
        Palindrome(int n);
        int checkCifre(int n);
        void checkPalindrome();
    private:
        int numero{0};
};