// Program to find the sum of this series upto n terms using the for loop
// 1,2,4,7,11,16
#include <iostream>
using namespace std;
int main()
{
    int n, term = 1, sum = 0;
    cout << "Enter the number of terms for which sum is to be find " << endl;
    cin >> n;
    for (int i = 0; i < n ;)
    {
        sum += term;
        i++;
        term += i;
    }
    cout<<"The sum of the n terms is => "<<sum<<endl;
    return 0;
}