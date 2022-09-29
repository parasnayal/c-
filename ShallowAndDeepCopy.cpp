// Shallow and Deep copy in c++
// an object is created by simply copying the data of all variables of the original object. This works well if none of the variables of the object are defined in the heap section of memory. If some variables are dynamically allocated memory from heap section, then the copied object variable will also reference the same memory location.
// This will create ambiguity and run-time errors, dangling pointer. Since both objects will reference to the same memory location, then change made by one will reflect those change in another object as well.

// #include <iostream>
// using namespace std;

// class Box
// {
// private:
//     int length, breadth, height;
//     int *ptr;

// public:
//     Box()
//     {
//         ptr = new int;
//     }
//     void setData(int x, int y, int z, int dim)
//     {
//         length = x;
//         breadth = y;
//         height = z;
//         *dimension = dim;
//     }
//     void showData(void)
//     {
//         cout << "length => " << length << endl;
//         cout << "breadth => " << breadth << endl;
//         cout << "height => " << height << endl;
//         cout << "dimension => " << *dimension << endl;
//     }
// };

// int main(void)
// {
//     Box b1;
//     b1.setData(10, 20, 30, 40);
//     b1.showData();
//     Box b2(b1);
//     b2.showData();
//     return 0;
// }

//
#include <iostream>
using namespace std;

class Box
{
private:
    int length, breadth, height;
    int *ptr;

public:
    Box()
    {
        cout<<"constructor"<<endl;
        ptr = new int;
    }
    void setData(int x, int y, int z, int dim)
    {
        length = x;
        breadth = y;
        height = z;
        *ptr = dim;
    }
    void showData(void)
    {
        cout << "length => " << length << endl;
        cout << "breadth => " << breadth << endl;
        cout << "height => " << height << endl;
        cout << "ptr => " << *ptr << endl;
    }
    Box(Box &b1)
    {
        cout<<"copy constructor"<<endl;
        length = b1.length;
        breadth = b1.breadth;
        height = b1.height;
        // to avoid shallow copy
        ptr = new int;
        *ptr = *(b1.ptr);
    }
    ~Box(){
        delete ptr;
    }
};

int main(void)
{
    Box b1;
    b1.setData(10, 20, 30, 40);
    b1.showData();
    Box b2(b1);
    b2.showData();
    return 0;
}