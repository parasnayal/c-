// push_back ()
#include <iostream>
using namespace std;
int main()
{
    string name = "paras";
    cout << "name before using push-back function => " << name << endl;
    cout << "length of name string before using push_back function => " << name.length() << endl;
    name.push_back(' ');
    name.push_back('n');
    name.push_back('a');
    name.push_back('y');
    name.push_back('a');
    name.push_back('l');
    cout << "name after using push-back function => " << name << endl;
    cout << "length of name string after using push_back function => " << name.length() << endl;
    return 0;
}