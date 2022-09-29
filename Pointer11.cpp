// Program to passing 2-D array to a function
#include <iostream>
using namespace std;
void changeArrayElement(int (*ptr)[4]);
int main()
{

    int array[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}};
    cout << "Element of the array before changes => " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    changeArrayElement(array);
    cout << "Element of the array after changes => " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
void changeArrayElement(int (*ptr)[4])
{
    cout << "size of ptr => " << sizeof(ptr) << endl;
    cout << "size of *ptr => " << sizeof(*ptr) << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            ptr[i][j] = ptr[i][j] * 2;
        }
    }
}