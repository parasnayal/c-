// program to find biggest number from three given numbers
#include <iostream>
using namespace std;
int main()
{

    int num1, num2, num3, bigger;
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number" << endl;
    cin >> num2;
    cout << "Enter the third number" << endl;
    cin >> num3;
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            bigger = num1;
        }
        else
        {
            bigger = num3;
        }
    }
    else
    {
        if (num2 > num3)
        {
            bigger = num2;
        }
        else
        {
            bigger = num3;
        }
    }
    cout << "The biggest number from given three numbers => " << num3 << endl;
}