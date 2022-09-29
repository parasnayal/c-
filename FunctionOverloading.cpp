// Function overloading is a feature of object oriented programming where two or more functions can have the same name but different parameters.when a function name is overloaded with different jobs it is called function overloading.

// (1) => parameters should have a different type.
// (2) => parameters should have different numbers.
// (3) => parameters should have a different sequence of parameters.

#include <iostream>
using namespace std;
int add(int a, int b);
int add(int a, int b, int c);
int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int result1 = add(a, b);
    int result2 = add(a, b, c);
    cout << "The sum of two number is => " << result1 << endl;
    cout << "The sum of three number is => " << result2 << endl;
    return 0;
}
int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}