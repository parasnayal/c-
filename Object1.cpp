// The main aim of object oriented programming is to bind together data and functions that operate on them so that no other part of the code can access the data except the function.

// A class is building block of object oriented programming.When we declare a class no memory is allocated for the data and functions but when we declare a object then memory is allocated for the object. A claas is like blueprint for the object.

#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int x, int y, int z);
    void printData(void)
    {
        cout << "The value of the a is => " << a << endl;
        cout << "The value of the b is => " << b << endl;
        cout << "The value of the c is => " << c << endl;
        cout << "The value of the d is => " << d << endl;
        cout << "The value of the e is => " << e << endl;
    }
};

void Employee ::setData(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}

int main()
{
    Employee paras;
    paras.setData(10, 20, 30);
    paras.d = 30;
    paras.e = 40;
    paras.printData();
    return 0;
}