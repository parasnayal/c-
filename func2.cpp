// program to find out the factorial of a number
#include <iostream>
using namespace std;
int find_Factorial(int num);
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    int result = find_Factorial(num);
    cout << "The factorial of a given number is => " << result << endl;
    return 0;
}
int find_Factorial(int num)
{
    int prod = 1;
    if (num == 0)
    {
        return 1;
    }
    else
    {
        while (num >= 1)
        {
            prod *= num;
            num--;
        }
        return prod;
    }
}
