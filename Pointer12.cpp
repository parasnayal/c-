// Void Pointer
// A pointer to void is a generic pointer that can point to any data type. We can assign address of any data type to a void pointer.
// Syntax => void *vp;
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    float b = 20.55;
    char c = 'p';

    // int *ip = &a;
    // float *fp = &b;
    // char *cp = &c;

    void *vp = &a;
    cout << vp << endl;

    // we can access the value assign at void pointer using type casting
    cout << *(int *)vp << endl;

    return 0;
}