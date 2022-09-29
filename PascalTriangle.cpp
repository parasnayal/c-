// Write a program to print the pascal triangle using 2-D array
#include <iostream>
using namespace std;
int main()
{
    int array[7][7];
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j || j == 0)
            {
                array[i][j] = 1;
            }
            else
            {
                array[i][j] = array[i - 1][j] + array[i - 1][j - 1];
            }
        }
    }

    cout << "The pascaL triangle is => " << endl;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}