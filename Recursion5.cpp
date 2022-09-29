// Program to generate the fibonacci series using the recursive method
#include <iostream>
using namespace std;
int fibonacci_series(int num);
int main()
{
    int terms, i = 0;
    cout << "Enter the numbers of terms to be printed" << endl;
    cin >> terms;
    while (i < terms)
    {
        int result = fibonacci_series(i);
        cout << result << "\t";
        i++;
    }
}
int fibonacci_series(int num)
{

    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci_series(num - 1) + fibonacci_series(num - 2);
    }
}