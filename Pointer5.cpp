// Pointer and one dimensional array

// The address of the first element of the array is also known as base address of the array.
// Name of the array is implicitly converted to the pointer to the first element of the array or constan pointer to the data type.

// When name of the array is operand of sizeof operator then it is return the size of the whole array.
// when name of the array is operand of & operator then it is return the address of the whole array or base address of the array.

// Subscript notation and pointer notation
// int array = {10,20,30,40,50}
// array = & array[0]
// array+1 = & array[1]
// array+2 = & array[2]
// array+3 = & array[3]
// array+4 = & array[4]

// Genral form => array + i denotes the address of the ith element of the array
// General form for the value of array elements => *(array+i) = arr[i] denotes the value of the ith element of the array

// Program to print the value and address of the element of the array.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int array[5] = {10, 20, 30, 40, 50};
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "The value of the " << i + 1 << "th element is => " << array[i] << endl;
//         cout << "The address of the " << i + 1 << "the element is => " << &array[i] << endl;
//         cout << "The address of the " << i + 1 << "the element is => " << array + i << endl;
//     }
//     cout << "The size of the whole array is => " << sizeof(array) << endl;
//     cout << "The addres of the whole array or base address of array is => " << array << endl;
//     return 0;
// }

// Program to print the value and address of elements of an array using pointer notation
#include <iostream>
using namespace std;
int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        cout << "The value of the " << i + 1 << "th element is => " << *(array + i) << endl;
        cout << "The address of the " << i + 1 << "th element is => " << array + i << endl;
    }
    return 0;
}

