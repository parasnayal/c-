// Program to print number whether it is even or odd
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "The given number is even" << endl;
    }
    else
    {
        cout << "The given number is odd" << endl;
    }
}
