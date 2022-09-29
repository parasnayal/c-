// Program to addition of two matrix
#include <iostream>
using namespace std;
#define ROW 3
#define COL 4
int main()
{
    int arr1[ROW][COL];
    int arr2[ROW][COL];
    int arr3[ROW][COL];
    cout << "Enter the elements in a 1st matrix" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter the elements in a 2nd matrix" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "New matrix after adding two matrix is => " << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << arr3[i][j] << "\t";
        }
        cout << endl;
    }
}