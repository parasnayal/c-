// Function templates
#include <iostream>
using namespace std;

template <class T>
T add(T x, T y)
{
    return x + y;
}
int main(void)
{
    int result1 = add<int>(10, 12);
    float result2 = add<float>(10.25, 12.26);
    cout << "result1 => " << result1 << endl;
    cout << "result2 => " << result2 << endl;
    return 0;
}