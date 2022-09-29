// Program to find the product of digits of any number
#include <iostream>
using namespace std;
int main()
{
    int num, prod = 1, rem;
    cout << "Enter the number " << endl;
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        prod *= rem;
        num /= 10;
    }
    cout << "The product of digits of given number => " << prod << endl;
    return 0;
}