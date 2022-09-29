// Program to generate the fibonacci series
#include <iostream>
using namespace std;
int main()
{
    int firstNumber = 0, secondNumber = 1, n, nextNumber;
    cout << "Enter the number of terms" << endl;
    cin >> n;
    cout << secondNumber << "\t";
    for (int i = 0; i < n; i++)
    {
        nextNumber = firstNumber + secondNumber;
        cout << nextNumber << "\t";
        firstNumber = secondNumber;
        secondNumber = nextNumber;
    }
    return 0;
}