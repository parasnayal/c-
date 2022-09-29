// Program to dynamically allocate a 2-D array using pointer to an array
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows required " << endl;
    cin >> rows;
    int(*ptr)[4];
    ptr = (int(*)[4])malloc(rows * 4 * sizeof(int));
    if (ptr == NULL)
    {
        cout << "Memory is not available" << endl;
        exit(1);
    }
    else
    {
        cout << "Enter the elements of 2-D array " << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin >> ptr[i][j];
            }
        }

        cout << "Elements of 2-D array " << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << ptr[i][j] << "\t";
            }
            cout << endl;
        }

        free(ptr);
    }
    return 0;
}