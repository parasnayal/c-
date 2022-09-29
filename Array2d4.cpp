// Program to transpose of a matrix
#include <iostream>
using namespace std;
#define ROW 3
#define COL 4
int main()
{
    int array1[ROW][COL];
    int array2[COL][ROW];
    cout << "Enter the elements of a matrix" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin >> array1[i][j];
        }
    }

    cout << "Matrix before the transpose" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << array1[i][j] << "\t";
        }
        cout << endl;
    }

    // find the transpose of a matrix
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            array2[i][j] = array1[j][i];
        }
    }

    // resultant matrix after finding the transpose of a matrix
    cout << "Resultant matrix => " << endl;

    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            cout << array2[i][j] << "\t";
        }
        cout << endl;
    }
}