// Static data members & functions in c++

// Static data members are class members that are declared using static keyword.

// Only one copy of that member is created for the entire class and is shared by all the objects of that class , no matter how many objects are created.

// It is initialize before any object of this class is being created, even before main starts.

// It is visible only within the class, but its lifetime is the entire program.

// The static member functions are special functions used to access the static data members or other static member functions. A member function is defined using the static keyword. A static member function shares the single copy of the member function to any number of the class' objects.

// Syntax => class_name::function_name (parameter);  

#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    string name;
    int id;
    static int totalEmployee;
    // Total employee is the static data member of class employee

public:
    void set_Information(void);
    void display_Information();
    static void get_Static_data()
    {
        cout << "The total number of employee in the company is => " << totalEmployee << endl;
    }
};
int Employee ::totalEmployee; // Default value of static member is 0
void Employee ::set_Information()
{
    cout << "Enter the id of the employee" << endl;
    cin >> id;
    cout << "Enter the name of the employee" << endl;
    cin >> name;
    totalEmployee++;
}

void Employee ::display_Information()
{
    cout << "The name of the id number " << id << " employee is => " << name << endl;
    cout << "The total Employee is => " << totalEmployee << endl;
}

int main()
{
    Employee E1, E2;
    E1.set_Information();
    E1.display_Information();

    E2.set_Information();
    E2.display_Information();

    Employee ::get_Static_data();
    return 0;
}