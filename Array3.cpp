// Program to count even and odd numbers in an array
#include <iostream>
using namespace std;
#define SIZE 10
int main()
{
    int array[SIZE], even = 0, odd = 0;
    cout << "Enter the elements of an array " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << "The even numbers of elements in an array => " << even << endl;
    cout << "The odd numbers of elements in an array => " << odd << endl;
    return 0;
}