// Program to find the largest and smallest number in an array
#include <iostream>
using namespace std;
#define SIZE 10
int main()
{
    int array[SIZE];
    cout << "Enter the elements in an array" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> array[i];
    }
    int largest = array[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (largest < array[i])
        {
            largest = array[i];
        }
    }
    cout << "The largest element in the array is => " << largest << endl;
    return 0;
}