// Program to convert the binary number to decimal number
#include <iostream>
using namespace std;
int main()
{
    int num, rem, prod = 1, decimalNumber = 0;
    cout << "Please enter the binary number" << endl;
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        decimalNumber += rem * prod;
        prod *= 2;
        num = num / 10;
    }
    cout << "the decimal number of given binary number is => " << decimalNumber << endl;
    return 0;
}