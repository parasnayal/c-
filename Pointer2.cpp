// A pointer is a variable that stores memory address.It is called pointer because it points to particular location in memory by storing the address of that location.
// data_type *pname;
// Example=> int *p1;
// p1 is pointer variable that points to variable of type int.
// p1 is pointer to int or (int *), we can say that base type of p1 is int.

// Assigning address to pointer variables
// Global and local static pointer are automatically initiallized to NULL.when we declare an automatic pointer variable it contains garbage value.It may be pointing anywhere in the memory.

#include <iostream>
using namespace std;
int main()
{

    int *iptr, age = 30;
    double *dptr, x = 3000;
    float salary = 100.55, *fptr = &salary;
    iptr = &age;
    dptr = &x;
    cout << "Address store at iptr is => " << iptr << endl;
    cout << "Address store at dptr is => " << dptr << endl;
    cout << "Address store at fptr is => " << fptr << endl;
    return 0;
}