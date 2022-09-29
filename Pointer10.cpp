// Program to passing 1-D array to a function
#include <iostream>
using namespace std;
void square(int arr[]);
// void square (int arr[5]);
// void square(int *arr);
int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    cout << "Elements of the array before changes => " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << "\t";
    }
    square(array);
    cout<<endl;
    cout << "Elements of the array after changes => " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << "\t";
    }
    return 0;
}
void square(int arr[])
{

    for (int i = 0; i < 5; i++)
    {
        arr[i] = arr[i] * 2;
    }
    cout<<endl;
    cout << "Elements of the array in function call => " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
}