// Program to print the armstrong numbers
#include <iostream>
using namespace std;
int main()
{
    int num, rem, cube = 1, sum;
    for (int index = 100; index <= 999; index++)
    {
        num = index;
        sum=0;
        while (num > 0)
        {
            rem = num % 10;
            cube = rem * rem * rem;
            sum += cube;
            num/=10;
            
        }
        if(index == sum){
            cout<<sum<<endl;
        }
    }
    return 0;
}