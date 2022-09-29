// ******************Calloc function*************************
// Syntax => void *calloc(size_t n , size)
// Used to dynamically allocate multiple blocks of memory & each block is of same size
// The difference between malloc and calloc function are =>
// (1) => The first one is in calloc two argument is present in which first one is number of block required and another is size of data type  or size of each block. Contigous allocation

// (2) => memory allocated by the malloc function is initialized with garbage value and the memory allocated by the calloc function is initialized with zero.

// *********************realloc function*****************************
// When we want to increase the memory allocated by the malloc () or calloc().then we use ralloc function which is also present in stdlib.h header file.when we increase the size of memory by realloc function then data present in memory is would not be lost.
// ptr = (int *) malloc (n*sizeof(int))
// Syntax => void *realloc(ptr,size_t newsize)
// if memory is not present in heap it returns NULL.

// Program to understand the realloc function
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int *ptr;

    ptr = (int *)malloc(3 * sizeof(int));
    if (ptr == NULL)
    {
        cout << "Memory is not available" << endl;
        exit(1);
    }
    else
    {
        cout << "Enter an integers " << endl;
        for (int i = 0; i < 3; i++)
        {
            cin >> ptr[i];
        }
        cout << "The entered integers are " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << *(ptr + i) << "\t";
        }

        ptr = (int *)realloc(ptr, 5 * sizeof(int));
        if (ptr == NULL)
        {
            cout << "Memory is not available" << endl;
        }
        cout << endl;
        cout << "Again enter integers" << endl;
        for (int i = 3; i < 5; i++)
        {
            cin >> ptr[i];
        }
        cout << "The final entered integers are " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << *(ptr + i) << "\t";
        }
    }
    return 0;
}