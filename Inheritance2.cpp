#include <iostream>
#include <string>
using namespace std;

// Syntax =>
/*class  <derived_class_name> : <access-specifier> <base_class_name>
{
        //body
}*/

// By default access specifier is private.

//  A derived class doesn’t inherit access to private data members. However, it does inherit a full parent object, which contains any private members which that class declares.

// When a base class is privately inherited by the derived class, public members of the base class becomes the private members of the derived class.

// when the base class is publicly inherited by the derived class, public members of the base class also become the public members of the derived class

class Employee
{
public:
    int id;
    string name;
    Employee(int inpID, string inpName)
    {
        id = inpID;
        name = inpName;
    }
    Employee() {}
    void displayDetail()
    {
        cout << "The name of the employee id number " << id << " is => " << name << endl;
    }
};

// When  we make derived class then automatically base class constructor is called therefore we must pass a default constructor.
class Programmer : public Employee
{
public:
    int languageCode = 9;
    Programmer(int inpID, string inpName)
    {
        id = inpID;
        name = inpName;
    }
    void programmerDetail()
    {
        cout << "The name of the employee id number " << id << " is => " << name << "and his favourite programming language code is => " << languageCode << endl;
    }
};
int main()
{
    Employee paras(10, "kishor");
    Programmer nayal(12, "nayal1");
    paras.displayDetail();
    nayal.displayDetail();
    return 0;
}