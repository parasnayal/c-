// Multilevel Inheritance => Deriving a class from a already derived class.

#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

class marks : public student
{
protected:
    float maths, physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

class result : public marks
{
private:
    int percentage;

public:
    void show_percentage(void);
};

void student ::set_roll_number(int inp_roll_number)
{
    roll_number = inp_roll_number;
}
void student ::get_roll_number(void)
{
    cout << "The roll number of the student is => " << roll_number << endl;
}

void marks ::set_marks(float marks1, float marks2)
{
    physics = marks1;
    maths = marks2;
}

void marks ::get_marks(void)
{
    cout << "The marks of the math is => " << maths << endl;
    cout << "The marks of the physics is => " << physics << endl;
}

void result ::show_percentage()
{
    cout << "The prcentage of the student is => " << (maths + physics) / 2 << "%" << endl;
}

int main()
{
    result paras;
    paras.set_roll_number(420);
    paras.get_roll_number();
    paras.set_marks(95.0, 90.0);
    paras.get_marks();
    paras.show_percentage();
    return 0;
}