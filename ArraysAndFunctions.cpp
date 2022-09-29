// Passing individual array elements to a function

// Program to pass array elements to a function
// call by value

// #include <iostream>
// using namespace std;
// #define SIZE 5
// void check(int num);
// int main()
// {
//     int array[SIZE];
//     cout << "Enter the elements of an array" << endl;
//     for (int i = 0; i < SIZE; i++)
//     {
//         cin >> array[i];
//         check(array[i]);
//     }
//     return 0;
// }
// void check(int num)
// {
//     if (num % 2 == 0)
//     {
//         cout << num << " is even" << endl;
//     }
//     else
//     {
//         cout << num << " is odd" << endl;
//     }
// }

// Passing whole 1-D array to a function
// call by reference
#include <iostream>
using namespace std;
#define SIZE 5
void changeArray(int arr[]);
int main()
{
    int array[SIZE];
    cout << "Enter the elements of an array" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> array[i];
    }
    cout << "Elements of the array before changing" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << "\t";
    }
    changeArray(array);
    cout << endl;
    cout << "Elements of the array after changing" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << "\t";
    }
    return 0;
}
void changeArray(int arr[])
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = arr[i] * arr[i];
    }
    cout << endl;
    cout << "Elements of the array after square" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << "\t";
    }
}