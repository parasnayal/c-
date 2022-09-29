// program to find the whether a number is even or odd
#include <iostream>
using namespace std;
void check_even_odd(int num);
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    check_even_odd(num);
    return 0;
}
void check_even_odd(int num)
{
    if (num % 2 == 0)
    {
        cout << "Given number is even" << endl;
    }
    else
    {
        cout << "Given number is odd" << endl;
    }
}