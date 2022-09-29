// Program to concatenate two or more strings
#include <iostream>
#include <cstring>

// (1) => strcat()
// int main (){
//     char str1 [] = "paras ";
//     char str2 [] = "nayal ";
//     strcat(str1,str2);
//     std::cout<<"String after concatenation of two strings => "<<str1<<std::endl;
//     return 0;
// }

// (2) => append()
// int main()
// {
//     std::string str1 = "paras ";
//     std::string str2 = "nayal ";
//     str1.append(str2);
//     std::cout << "String after concatenate two strings => " << str1 << std::endl;
//     return 0;
// }

// (3) => using + operator
int main()
{
    std::string str1 = "paras ";
    std::string str2 = "nayal ";
    str1 = str1 + str2;
    std::cout << "String after the concatenate two strings => " << str1 << std::endl;
    return 0;
}