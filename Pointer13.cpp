// Dynamic memory allocation
// Syntax => void *malloc(size_t size);
// size => number of bytes to be allocated
// size_t => unsigned int
// malloc function returns a void pointer which points to first byte of memory.In case of when memory in not sufficient it returns NULL.it allocates single block of memory.
// ptr = (dataType *) malloc (size_t size)
// Memory allocated by malloc function contains the garbage value.

// Program to understand the dynamic allocation of memory

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int *p, n;
    cout << "Enter number of integers to be required " << endl;
    cin >> n;
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        cout << "Memory is not available" << endl;
        cin >> n;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Enter an integer" << endl;
            cin >> p[i];
        }

        cout << "The entered integers are " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << *(p + i) << "\t";
        }
    }
    return 0;
}
