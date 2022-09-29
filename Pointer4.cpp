// Program to print size of pointer variables and size of values dereferenced by them
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    double b = 14.5;
    float c = 25.38;
    int *iptr = &a;
    double *dptr = &b;
    float *fptr = &c;

    cout << "size of iptr => " << sizeof(iptr) << endl;
    cout << "size of dptr => " << sizeof(dptr) << endl;
    cout << "size of fptr => " << sizeof(fptr) << endl;

    cout << "size of a => " << sizeof(*iptr) << endl;
    cout << "size of b => " << sizeof(*dptr) << endl;
    cout << "size of c => " << sizeof(*fptr) << endl;
    return 0;
}