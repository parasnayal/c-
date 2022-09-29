// Program to print the sum of digits of any number using while loop
#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, rem;
    cout << "Enter the number" << endl;
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    cout << "The sum of digits of a given number is => " << sum << endl;
    return 0;
}