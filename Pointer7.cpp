// Pointer to an array (Array pointer) => points to the whole array of integers instead of 0th element of the array
// Example => int (*ptr)[10];
// Here ptr is pointer that points to an array of 10 integers.base type of ptr is "pointer to an array of 10 integers"

// Program to understand the difference between pointer to integers and pointer to an array of integers

// #include <iostream>
// using namespace std;
// int main()
// {
//     int array[5] = {10, 20, 30, 40, 50};
//     int *p = array;        // points to 0th element of the array
//     int(*ptr)[5] = &array; // points to the whole array
//     cout << "p = " << p << "\t"
//          << "ptr = " << ptr << endl;
//     p++;
//     ptr++;
//     cout << "p = " << p << "\t"
//          << "ptr = " << ptr << endl;
//     return 0;
// }

// Program to dereference a pointer to an array

#include <iostream>
using namespace std;
int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    int *p = array;
    int(*ptr)[5] = &array;
    cout << "p = " << p << "\t"
         << "ptr = " << ptr << endl;
    cout << "sizeof(p) = " << sizeof(p) << "\t"
         << "sizeof(ptr) = " << sizeof(ptr) << endl;
    cout << "*p = " << *p << "\t"
         << "*ptr = " << *ptr << endl;
    cout << "sizeof(*p) = " << sizeof(*p) << "\t"
         << "sizeof(*ptr) = " << sizeof(*ptr) << endl;

    return 0;
}