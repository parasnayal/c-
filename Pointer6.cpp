// Program to print the value and address of the array elements using subscripting a pointer

#include <iostream>
using namespace std;
int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    int *ptr = array;
    for (int i = 0; i < 5; i++)
    {
        cout << "The value of " << i + 1 << "th element is => " << *(ptr + i) << "\t" << ptr[i] << endl;
        cout << "The address of " << i + 1 << "th element  is => " << ptr + i << "\t" << &ptr[i] << endl;
    }
    return 0;
}