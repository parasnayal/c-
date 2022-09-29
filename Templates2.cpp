#include <iostream>
using namespace std;

template <class T1, class T2>
class Employee
{
public:
    T1 id;
    T2 name;
    Employee(T1 inp_id, T2 inp_name)
    {
        id = inp_id;
        name = inp_name;
    }
    void display()
    {
        cout << "name => " << name << endl;
        cout << "id => " << id << endl;
    }
};

int main(void)
{
    Employee<int, string> E1(39, "paras");
    E1.display();
    return 0;
}