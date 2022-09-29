// Nesting of member functions
#include <iostream>
#include <string>
using namespace std;

class binaryNumber
{
private:
    string num;
    void chk_binary(void);
public:
    void read_number(void);
    
    void print_Number()
    {
        cout << "The binary number is => " << num << endl;
    }
};

void binaryNumber ::read_number()
{
    cout << "Enter a binary number => " << endl;
    cin >> num;
    chk_binary();
}

void binaryNumber ::chk_binary()
{
    for (int i = 0; i < num.length(); i++)
    {
        if (num.at(i) != '0' && num.at(i) != '1')
        {
            cout << "The number is not a binary number " << endl;
            exit(0);
        }
    }
}

int main()
{
    binaryNumber obj1;
    obj1.read_number();
    
    obj1.print_Number();
    return 0;
}