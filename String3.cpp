// Input functions
// (1) => getline()
#include<iostream>
using namespace std;
// The C++ getline() is a standard library function that is used to read a string or a line from an input stream
int main () {
    char str1 [12];
    cout<<"Enter your name => "<<endl;
    // cin.getline(str1,15,' ');
    cin.getline(str1,15);
    cout<<"Your entered name is => "<<str1<<endl;
    return 0;
}