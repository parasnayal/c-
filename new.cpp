// When you create a new object , memory is allocated using operator new function and then constructor is invoked to intialize the memory.Here , the new operator does both the memory allocation and intialization, where as the operator new only does the allocation.

// **************** new keyword ****************
// The new operator is an operator which denotes a request for memory allocation on the Heap.
// If sufficient memory is available, new operator initializes the memory and returns the address of the newly allocated and initialized memory to the pointer variable
// When you create an object of class using new keyword(normal new)
// The memory for the object is allocated using operator new from heap.
// The constructor of the class is invoked to properly initialize this memory.

#include <iostream>
using namespace std;
int main(void)
{
    // int *p = new int;  // returns the address of the memory allocated
    int *p = new int(40);
    cout << "address of p is => " << p << endl;
    cout << "value present at address of p is => " << *p << endl;

    int *arr = new int[4];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "address of arr is => " << arr + 0 << endl;
    cout << "address of arr is => " << arr + 1 << endl;
    cout << "address of arr is => " << arr + 2 << endl;
    cout << "value present at address of arr's 1st element is => " << *(arr + 0) << endl;
    cout << "value present at address of arr's 2nd element is => " << *(arr + 1) << endl;
    cout << "value present at address of arr's 3rd element is => " << *(arr + 2) << endl;
    return 0;
}

// ****************** Operator new *******************