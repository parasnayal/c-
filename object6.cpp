// friend class
// making one class function a friend of another class

#include <iostream>
using namespace std;

// forward declaration
class complex;

class calculator
{
public:
    int sumRealNumber(complex, complex);
    int sumCompNumber(complex, complex);
};

class complex
{
private:
    int a, b;

public:
    // Individually declare a class function as a friend
    // friend int calculator ::sumRealNumber(complex o1, complex o2);
    // friend int calculator ::sumCompNumber(complex o1, complex o2);

    // Declare whole class as a friend class;
    friend class calculator;
    
    void setData(int x, int y);
    void makeComplexNumber()
    {
        cout << "The complex number is => " << a << " + " << b << "i" << endl;
    }
};

void complex ::setData(int x, int y)
{
    a = x;
    b = y;
}

int calculator ::sumRealNumber(complex o1, complex o2)
{
    return o1.a + o2.a;
}

int calculator ::sumCompNumber(complex o1, complex o2)
{
    return o1.b + o2.b;
}
int main()
{
    complex o1, o2;
    o1.setData(10, 20);
    o1.makeComplexNumber();

    o2.setData(30, 40);
    o2.makeComplexNumber();

    calculator sum;
    int sumOfRealDigit = sum.sumRealNumber(o1, o2);
    int sumOfCompDigit = sum.sumCompNumber(o1, o2);

    cout << "The sum of the real part of the complex number is => " << sumOfRealDigit << endl;
    cout << "The sum of the complex part of the complex number is => " << sumOfCompDigit << endl;
    return 0;
}