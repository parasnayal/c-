// Program to convert a positive decimal number to binary , octal or hexadecimal

#include <iostream>
using namespace std;
void convert(int name, int base);
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    convert(num, 2);
    cout << "\n";
    convert(num, 8);
    cout << "\n";
    convert(num, 16);
    cout << "\n";
    return 0;
}
void convert(int num, int base)
{
    int rem = num % base;
    if (num == 0)
    {
        return;
    }
    convert(num / base, base);
    if (rem < 10)
    {
        cout << rem;
    }
    else
    {
        cout << static_cast<char>(rem - 10 + 'A');
    }
}