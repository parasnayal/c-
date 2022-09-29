// program to multiply two positive numbers without using * operator
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, result = 0;
    cout << "Enter the first positive number" << endl;
    cin >> num1;
    cout << "Enter the second positive number" << endl;
    cin >> num2;
    for (int i = 0; i < num2; i++)
    {
        result += num1;
    }
    cout << "The multiplication of two number is => " << result << endl;
    return 0;
}