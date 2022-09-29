// Program to find the summation of numbers from 1 to n
#include <iostream>
using namespace std;
int summation(int num);
int main()
{
    int num;
    cout << "Enter the number of terms for whicn sum is to be find " << endl;
    cin >> num;
    int sum_of_n_terms = summation(num);
    cout << "The sum of the n terms is => " << sum_of_n_terms << endl;
    return 0;
}

int summation(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return num + summation(num - 1);
    }
}