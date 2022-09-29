// capacity and length function in c++
// Capacity of the string is not necessarily equal to the size or length of the string. If it is greater, it means extra space is allocated for other string operations.
#include<iostream>
using namespace std;
int main () {
    string str1 = "paras";
    cout<<"The length of the string is => "<<str1.length()<<endl;
    cout<<"The capacity of the string is => "<<str1.capacity()<<endl;
    str1.push_back(' ');
    cout<<"The length of the string is => "<<str1.length()<<endl;
    cout<<"The capacity of the string is => "<<str1.capacity()<<endl;
    return 0;
}