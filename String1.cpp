// A string in c++ is an object that represents a sequence of characters.On the other hand , string in c is an array of characters.String in the c++ is an part of the standard string class (std::string).Th string class stores the character of the string as a collection of bytes in contigous memory locations.the extraction operator considers white space (such as space, tab, or newline) as the terminating character. 
//  Syntax=> (1) string  name = "paras";
// (2) => char str [] = "paras";
// (3) => char str [] = {'p','a','r','a','s','\0'}
// c++ support both string and character arrays.


// Difference between string and character arrays
// String is a C++ class while the string variables are the objects of this class.
// Character array is a collection of variables with the data type char.
// To access a particular character, we use "str_name.charAt(index)" or "str[index]".A character can be accessed by its index in the character array.
// In string class Memory is allocated dynamically. More memory can be allocated at run time.In character array Memory is allocated statically. More memory can not be allocated at run time.


// cin.get() is used for accessing character array. It includes white space characters. cin.get() reads a string with the whitespace.


// Program to taking input as a string from the user
#include <iostream>
using namespace std;
int main()
{

    char str[30];
    // cout << "Enter your name : " << endl;
    // cin >> str;
    // cout<<"You have entered string : "<<str<<endl;
    // It gives output only before space

    cout << "Enter your name : " << endl;
    cin.get(str,50);
    cout<<"You have entered string : "<<str<<endl;
    return 0;
}
