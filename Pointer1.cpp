// Program to print the address of a variable using the address operator
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number => " << endl;
    cin >> a;
    cout << "The address of a variable a is => " << &a << endl;
    return 0;
}