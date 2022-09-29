// Program to multiplication of two matrix
#include <iostream>
using namespace std;
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2
int main()
{
    int arr1[ROW1][COL1];
    int arr2[ROW2][COL2];
    int arr3[ROW2][COL2];

    cout << "Enter the elements of first matrix" << endl;
    for (int i = 0; i < ROW1; i++)
    {
        for (int j = 0; j < COL1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter the elements of second matrix" << endl;
    for (int i = 0; i < ROW2; i++)
    {
        for (int j = 0; j < COL2; j++)
        {
            cin >> arr2[i][j];
        }
    }

    // multiplication of two matrix
    for (int i = 0; i < ROW1; i++)
    {
        for (int j = 0; j < COL2; j++)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < COL1; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // resultant matrix
    for (int i = 0; i < ROW1; i++)
    {
        for (int j = 0; j < COL2; j++)
        {
            cout << arr3[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}