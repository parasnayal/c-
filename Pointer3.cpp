// Dereferencing pointer variable
// When we use indirection operator the number of bytes retrieve will be different for different data type.The reason that pointer variable only tells about the address of starting byte
#include <iostream>
using namespace std;
int main()
{
    int a = 100;
    float b = 55.5;
    int *iptr = &a;
    float *fptr = &b;
    cout << "The address of a or value of iptr is => " << iptr << endl;
    cout << "The address of b  or value of fptr is => " << fptr << endl;

    cout << "The address of iptr is => " << &iptr << endl;
    cout << "The address of fptr is => " << &fptr << endl;

    cout << "The value of a is => " << *iptr << endl;
    cout << "The value of a is => " << *(&a) << endl;
    cout << "The value of a is => " << a << endl;

    cout << "The value of b is => " << *fptr << endl;
    cout << "The value of b is => " << *(&b) << endl;
    cout << "The value of b is => " << b << endl;
    return 0;
}