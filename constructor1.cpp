// constructor in c++
// constructor is a special member function that is automatically invoked at the time of object creation.
// constructor has the same name as the class.
// It should be declared in the public section.
// It is used to initialize the data members of newly created objects generally.
//  It constructs the values i.e. provides data for the object which is why it is known as constructors.
// constructor does not have return value hence they do not have return type.

#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    complex(void);   // Default constructor
    void makeComplexNumber(void)
    {
        cout << "The complex number is => " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)
{
    a = 10;
    b = 20;
}
int main()
{
    complex o1;
    o1.makeComplexNumber();
    return 0;
}