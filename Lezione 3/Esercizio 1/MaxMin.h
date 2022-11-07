#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class MaxMin{
    public:
        MaxMin(int a, int b, int c, int d, int e);
        void Min(int a, int b, int c, int d, int e);
        void Max(int a, int b, int c, int d, int e);

    private:
        int massimo, minimo;
};