// Templates with default parameters
#include <iostream>
using namespace std;

template <class T1 = int, class T2 = string, class T3 = float>

class Base
{
public:
    T1 id;
    T2 name;
    T3 salary;
    Base(T1 inp_id, T2 inp_name, T3 salary)
    {
        id = inp_id;
        name = inp_name;
        this->salary = salary;
    }
    void Details()
    {
        cout << "name => " << name << endl;
        cout << "id => " << id << endl;
        cout << "salary => " << salary << endl;
    }
};

int main(void)
{
    Base <> B1(39,"paras",24.8);
    B1.Details();
    return 0;
}