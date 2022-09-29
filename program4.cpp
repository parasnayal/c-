// Program to find quotient and remainder
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, quotient, remainder;
    cout << "Enter the first number " << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;

    if (num1 > num2)
    {
        if (num2 == 0)
        {
            cout << "Divide by zero is not possible" << endl;
        }
        else
        {
            quotient = num1 / num2;
            remainder = num1 % num2;
            cout << "The remainder is =>" << remainder << endl;
            cout << "The quotient is =>" << quotient << endl;
        }
    }
    else
    {
        if (num2 == 0)
        {
            cout << "Divide by zero is not possible" << endl;
        }
        else
        {
            quotient = num2 / num1;
            remainder = num2 % num1;
            cout << "The remainder is =>" << remainder << endl;
            cout << "The quotient is =>" << quotient << endl;
        }
    }
}