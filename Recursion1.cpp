// Program to find the factorial of a number using the recursive function
#include <iostream>
using namespace std;
int factorial(int num);
int main()
{
    int num;
    cout << "Enter a number " << endl;
    cin >> num;
    int result = factorial(num);
    cout << "The factorial of a given number is => " << result << endl;
    return 0;
}
int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        if (num == 1)
        {
            return 1;
        }
        else
        {
            return num * factorial(num - 1);
        }
    }
}