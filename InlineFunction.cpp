// C++ provides an inline functions to reduce the function call overhead. Inline function is a function that is expanded in line when it is called. When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call. This substitution is performed by the C++ compiler at compile time. Inline function may increase efficiency if it is small.

// Syntax => inline return-type function-name(parameters)
// {
    // function code
// }  

//  inlining is only a request to the compiler, not a command. Compiler can ignore the request for inlining. Compiler may not perform inlining in such circumstances like:
// 1) If a function contains a loop. (for, while, do-while)
// 2) If a function contains static variables.
// 3) If a function is recursive.
// 5) If a function contains switch or goto statement.

#include<iostream>
using namespace std;
inline int add(int a , int b){
    return a+b;
}
int main () {
    int a = 10 , b = 30;
    cout<<"The sum of two number is => "<<add(a,b)<<endl;
    cout<<"The sum of two number is => "<<add(a,b)<<endl;
    cout<<"The sum of two number is => "<<add(a,b)<<endl;
    cout<<"The sum of two number is => "<<add(a,b)<<endl;
    cout<<"The sum of two number is => "<<add(a,b)<<endl;
    return 0;
}