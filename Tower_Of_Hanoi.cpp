// Program to solve the problem of tower of hanoi using the recursion
#include <iostream>
using namespace std;
void tofh(int disk, char source, char temp, char dest);
int main()
{
    int disk;
    cout << "Enter the number of disk " << endl;
    cin >> disk;
    tofh(disk, 'A', 'B', 'C');
    return 0;
}
void tofh(int disk, char source, char temp, char dest)
{
    if (disk == 1)
    {
        cout << "moves disk" << disk << " from " << source << "to " << dest << endl;
        return;
    }
    else

    {
        tofh(disk - 1, source, dest, temp);
        cout << "moves disk" << disk << " from " << source << "to " << dest << endl;
        cout<<"hello"<<endl;
        tofh(disk - 1, temp, source, dest);
        cout<<"world"<<endl;
    }
}