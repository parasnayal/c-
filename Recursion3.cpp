// Program to displaying numbers from 1 to n
#include <iostream>
using namespace std;
void display(int num);
int main()
{
    int terms;
    cout << "Enter the number of terms to be printed" << endl;
    cin >> terms;
    display(terms);
    return 0;
}
void display(int num)
{
    if (num == 1)
    {
        cout << num << "\t";
    }

    else
    {
        display(num - 1);
        cout << num << "\t";
    }
}