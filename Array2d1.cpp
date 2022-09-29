// Program to input and display a matrix
#include <iostream>
using namespace std;
#define ROW 3
#define COL 4
int main()
{
    int arr[ROW][COL];
    cout << "Enter the elements in a matrix" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Elements of the matrix are => " << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}