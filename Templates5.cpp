#include <iostream>
using namespace std;
template <class T1, class T2>
class Base
{
public:
    T1 id;
    T2 name;
    Base(T1 inp_id, T2 inp_name)
    {
        id = inp_id;
        name = inp_name;
    }
    void display();
};
template <class T1, class T2>
void Base<T1, T2>::display()
{
    cout << "id => " << id << endl;
    cout << "name => " << name << endl;
}

void func (int id ){
    cout<<" I am func() function "<<id<<endl;
}
template<class T1>
void func (T1 id){
    cout<<" I am  template func() function "<<id<<endl;
}


int main(void)
{
    // Base<int, string> b1(39, "paras");
    // b1.display();
    func(34);
    func<int>(38);
    return 0;
}