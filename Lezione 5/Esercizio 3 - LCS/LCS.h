#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class LCS{
    public:
        template <typename T>
        const T& max(const T&, const T&);
        int longestCommon(string a, string b, int i, int j);  
};