// Dynamic arrays

// Program to access dynamically allocated memory as a 1-D array
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int *ptr, n;
    cout << "Enter the number of integers to be required " << endl;
    cin >> n;
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        cout << "Memory is not available" << endl;
        exit(1);
    }
    else
    {
        cout << "Enter an integers" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> ptr[i];
        }

        cout << "The entered integers are => " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << ptr[i] << "\t";
        }
        free(ptr);
    }

    return 0;
}