// Program to find the factorial of any number
#include <iostream>
using namespace std;
int main()
{
    int num, fact = 1;
    cout << "Enter the number " << endl;
    cin >> num;
    if (num == 0)
    {
        cout << "The factorial of a given number is => " << 1 << endl;
    }
    else if (num < 0)
    {
        cout << "Please enter the positive number" << endl;
    }
    else
    {
        while (num >= 1)
        {
            fact *= num;
            num--;
        }
    }
    cout << "The factorial of a given number is => " << fact << endl;
    return 0;
}