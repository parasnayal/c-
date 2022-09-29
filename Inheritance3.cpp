// Single Inheritance => A derived class from one base class.

#include <iostream>
using namespace std;
class Base
{
private:
    int data1;

public:
    int data2;
    void setData(void);
    int getData1(void);
    int getData2(void);
};

class derived : public Base
{
private:
    int data3;

public:
    void process(void);
    void display(void);
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}
void derived ::process(void)
{
    data3 = data2 * getData1();
}
/*
	                        Public Derivation      	Private Derivation    	Protected Derivation
Private members           	Not Inherited              	Not Inherited        Not Inherited              
Protected members           Protected                    Private             Protected   	                   
Public members           	Public	                    Private              Protected  */

void derived ::display()
{
    cout << "The value of data1 => " << getData1() << endl;
    cout << "The value of data2 => " << data2 << endl;
    cout << "The value of data3 => " << data3 << endl;
}

int main()
{
    derived obj1;
    obj1.setData();
    obj1.process();
    obj1.display();
    return 0;
}