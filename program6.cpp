// Program to find whether a year is leap or not
// In leap year number of days is 366

// Ist method
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year" << endl;
    cin >> year;
    if (year % 100 != 0)
    {
        if (year % 4 == 0)
        {
            cout << "Given year is leap year" << endl;
        }
        else
        {
            cout << "Given year is not a leap year" << endl;
        }
    }
    else
    {
        if (year % 400 == 0)
        {
            cout << "Given year is leap year" << endl;
        }
        else
        {
            cout << "Given year is not a leap year" << endl;
        }
    }
}

// 2nd method

// #include <iostream>
// using namespace std;
// int main()
// {
//     int year;
//     cout << "Enter year" << endl;
//     cin >> year;
//     if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
//     {
//         cout << "Given year is leap year" << endl;
//     }
//     else
//     {
//         cout << "Given year is not a leap year" << endl;
//     }
//     return 0;
// }