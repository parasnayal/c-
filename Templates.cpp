// Template => The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types.
// C++ adds two new keywords to support templates: ‘template’ and ‘typename’. The second keyword can always be replaced by the keyword ‘class’.

#include <iostream>
using namespace std;

// when we have many data types then we can use template for creating the class
template <class T>

class Base
{
public:
    T *arr;
    int size;
    Base(int length)
    {
        size = length;
        arr = new T[length];
    }
    T sum(Base &obj)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            // d +=obj.arr[i];
            d += this->arr[i];
        }
        return d;
    }
};

int main(void)
{
    // Base b1(3);
    Base<int> b1(3);
    b1.arr[0] = 10;
    b1.arr[1] = 20;
    b1.arr[2] = 30;
    int result = b1.sum(b1);
    cout << "sum of the array element is => " << result << endl;
    return 0;
}