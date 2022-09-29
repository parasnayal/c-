// Program to reverse the elements of the array
#include <iostream>
using namespace std;
#define SIZE 10

// 1st method
// int main()
// {
//     int array[SIZE], array2[SIZE];
//     cout << "Enter the elements of an array" << endl;
//     for (int i = 0; i < SIZE; i++)
//     {
//         cin >> array[i];
//     }
//     cout << "Elements of the array before reversing is => " << endl;
//     for (int i = 0; i < SIZE; i++)
//     {
//         cout << array[i] << "\t";
//     }
//     for (int i = SIZE - 1, j = 0; i >= 0; i--, j++)
//     {
//         array2[j] = array[i];
//     }
//     cout<<endl;
//     cout << "Elements of the array after reversing is => " << endl;
//     for (int i = 0; i < SIZE; i++)
//     {
//         cout << array2[i] << "\t";
//     }
// }

// 2nd method
int main()
{
    int array[SIZE];
    cout << "Enter the elements of an array" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> array[i];
    }
    cout << "Elements of the array before reversing is => " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << "\t";
    }

    for (int i = 0, j = SIZE - 1; i < j; i++, j--)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    cout << endl;
    cout << "Elements of the array after reversing is => " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << "\t";
    }
}