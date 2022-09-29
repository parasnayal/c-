// constructor overloading

#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex()
    {
        a = 0;
        b = 0;
    }
    void makeComplexNumber()
    {
        cout << "The complex number is => " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1(10, 20);
    c1.makeComplexNumber();

    complex c2(30);
    c2.makeComplexNumber();

    complex c3;
    c3.makeComplexNumber();
    return 0;
}