// Program to print numbers in reverse order with a difference of 2
#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    while (num >= 0)
    {
        cout << num << "\t";
        num -= 2;
    }
    return 0;
}