// Program to input value into an array and display them
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter the value of array element" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Element of the array are " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}