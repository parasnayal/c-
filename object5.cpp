// friend function and friend classes in c++
// A friend function can be given grant to access the private data of the class
// A friend function can be happen :
// (1) => global function
// (2) => function of another class
#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    friend complex sumComplex(complex o1, complex o2);
    void setData(int x, int y);
    void makeComplexNumber()
    {
        cout << "The complex number is => " << a << " + " << b << "i " << endl;
    }
};

void complex ::setData(int x, int y)
{
    a = x;
    b = y;
}

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setData(10, 20);
    c1.makeComplexNumber();

    c2.setData(30, 40);
    c2.makeComplexNumber();

    sum = sumComplex(c1, c2);
    sum.makeComplexNumber();
    return 0;
}