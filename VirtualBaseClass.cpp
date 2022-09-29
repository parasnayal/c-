// Virtual base class in c++

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int number)
    {
        roll_number = number;
    }

    void show_roll_number(void)
    {
        cout << "You roll number is => " << roll_number << endl;
    }
};

class Test : virtual public Student
{

protected:
    float maths, physics;

public:
    void set_marks(float a, float b)
    {
        maths = a;
        physics = b;
    }
    void show_marks(void)
    {
        cout << "You marks is here : "
             << "maths : " << maths << "\n"
             << "physics : " << physics << endl;
    }
};

class Sports : virtual public Student
{

protected:
    int score;

public:
    void set_score(int sc)
    {
        score = sc;
    }
    void show_score(void)
    {
        cout << "Your sports score is => " << score << endl;
    }
};

class Result : public Test, public Sports
{

protected:
    float result;

public:
    void set_result(void)
    {
        result = maths + physics + score;
        show_roll_number();
        show_marks();
        show_score();
    }

    void your_result(void)
    {
        cout << "Your total marks is => " << result << endl;
    }
};

int main()
{
    Result paras;
    paras.set_roll_number(39);
    paras.set_marks(90, 95);
    paras.set_score(50);
    paras.set_result();
    paras.your_result();
    return 0;
}