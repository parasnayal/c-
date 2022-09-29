// Delete is an operator that is used to destroy array and non-array(pointer) objects which are created by new expression.
// Delete can be used by either using Delete operator or Delete [ ] operator
// New operator is used for dynamic memory allocation which puts variables on heap memory.
// Which means Delete operator deallocates memory from heap.
// Pointer to object is not destroyed, value or memory block pointed by pointer is destroyed.
// The delete operator has void return type does not return a value.

// (1) => deleting array objects => we delete an array using [] brackets.
// #include <iostream>
// using namespace std;

// int main()
// {

//     // Allocate heap memory
//     int *array = new int[3];
//     array[0] = 10;
//     array[1] = 20;
//     array[2] = 30;

//     cout << "The value of arrays 1st element => " << *(array + 0) << endl;
//     cout << "The value of arrays 2nd element => " << *(array + 1) << endl;
//     cout << "The value of arrays 3rd element => " << *(array + 2) << endl;

//     cout << "The address of arrays 1st element => " << array + 0 << endl;
//     cout << "The value of arrays 2nd element => " << array + 1 << endl;
//     cout << "The value of arrays 3rd element => " << array + 2 << endl;

//     // Deallocate memory from the heap

//     delete[] array;

//     cout << "The value of arrays 1st element => " << *(array + 0) << endl;
//     cout << "The value of arrays 2nd element => " << *(array + 1) << endl;
//     cout << "The value of arrays 3rd element => " << *(array + 2) << endl;

//     cout << "The address of arrays 1st element => " << array + 0 << endl;
//     cout << "The value of arrays 2nd element => " << array + 1 << endl;
//     cout << "The value of arrays 3rd element => " << array + 2 << endl;

//     return 0;
// }

// 2. Deleting NULL pointer : Deleting a NULL does not cause any change and no error.

#include<iostream>
using namespace std;
int main (void){
    int *ptr = NULL;
    delete ptr;
    return 0;
}

