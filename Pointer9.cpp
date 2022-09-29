// Call By value
// #include <iostream>
// using namespace std;
// void func(int a, int b);
// int main()
// {
//     int a = 10, b = 20;
//     cout << "Value before function call => " << a << "\t" << b << endl;
//     func(a, b);
//     cout << "value after function call => " << a << "\t" << b << endl;
//     return 0;
// }
// void func(int a, int b)
// {
//     a++;
//     b++;
//     cout << "in function call => " << a << "\t" << b << endl;
// }

// Call by reference
#include <iostream>
using namespace std;
void func(int *x, int *y);
int main()
{
    int a = 10, b = 20;
    cout << "Before function call => " << a << "\t" << b << endl;
    func(&a, &b);
    cout << "after function call => " << a << "\t" << b << endl;
    return 0;
}
void func(int *x, int *y)
{
    (*x)++;
    (*y)++;
    cout << "In function call => " << *x << "\t" << *y << endl;
}