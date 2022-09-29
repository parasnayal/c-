// program to print a message if negative number is entered
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    if (num < 0)
    {
        cout << "Negative number is entered" << endl;
    }
    else
    {
        cout << "The entered number is => " << num << endl;
    }
}