// Arrow operator in c++
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    void setData(int x, int y)
    {
        real = x;
        imaginary = y;
    }
    void getData()
    {
        cout << "The real part of the complex number is => " << real << endl;
        cout << "The imaginary part of the complex number is => " << imaginary << endl;
    }
};
int main(void)
{
    Complex c1;
    // c1.setData(10, 20);
    // c1.getData();
    // Complex *ptr = &c1;
    // (*ptr).setData(30,40);
    // (*ptr).getData();
    // ptr->setData(50, 60);
    // ptr->getData();

    Complex *ptr = new Complex;
    ptr->setData(70, 80);
    ptr->getData();
    return 0;
}