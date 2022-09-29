// Pointer and two dimensional array

// we can access the element of the array using the pointer notation as well as subscript notation
// array[i][j] = *(*(array+i)+j)

// Program to print the value and address of elements of a 2-D array
#include <iostream>
using namespace std;
int main()
{
    int array[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}};
    for (int i = 0; i < 3; i++)
    {
        cout << "Address of " << i << "th element of the array" << array + i << endl;
        cout << "The base address of " << i << "th 1-D array is => " << *(array + i) << "\t" << array[i] << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << array[i][j] << "\t" << *(*(array + i) + j) << endl;
        }
    }
    return 0;
}