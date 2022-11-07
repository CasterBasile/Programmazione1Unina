#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::array;


const int rig{3}; //numero di righe 
const int col{3}; //numero di colonne

void setMat1(array<array<int, col>,rig> &mat1);
void setMat2(array<array<int, col>,rig> &mat2);
void getMat(array<array<int, col>,rig> &mat1);
void getProd(array<array<int, col>,rig> &mat1, array<array<int, col>,rig> &mat2);



#endif