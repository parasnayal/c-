// Program to add elements of an array
#include <iostream>
using namespace std;
int main()
{
    int array[5], sum = 0;
    cout << "Enter the value of array elements " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < 5; i++)
    {
        sum += array[i];
    }

    cout << "The sum of the array's elements is => " << sum << endl;
    return 0;
}