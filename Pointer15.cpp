// free()
// The dynamically allocated memory is not automatically released.It will exist end of the program.The function free() is used to released the dynamically allocated memory.Memory released by free() is made available to the heap again and can be used for some othet purpose.
// Syntax => free(ptr)

// Program to understand the free ()
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int *p, n;
    cout << "Enter an integers " << endl;
    cin >> n;
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        cout << "Memory is not available" << endl;
        exit(1);
    }
    else
    {
        cout << "Value of pointer befor relasing memory => " << p << endl;
        cout << "Enter an integers " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        cout << "The entered integers are " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << *(p + i) << "\t";
        }
        free(p);
        cout<<endl;
        cout << "Value of pointer after relasing memory => " << p << endl;
         cout << "Accessing elements after relasing the memory " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << *(p + i) << "\t";
        }
    }
    return 0;
}

// When we relase the memory from the heap .memory is released from the heap but in pointer variable address is still present which points to memory which is not present in the heap .this is known as dangling pointer.
// Memory leak => improper use of heap memory can lead us to memory leak situation