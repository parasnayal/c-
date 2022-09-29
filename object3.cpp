// How to use array in class
#include <iostream>
using namespace std;

class shop
{
private:
    int itemID[10];
    int itemPrice[10];
    int counter;

public:
    void init() { counter = 0; }
    void setItem(void);
    void displayItem(void);
};
void shop ::setItem(void)
{
    cout << "The id of your counter no " << counter + 1 << " is " << endl;
    cin >> itemID[counter];
    cout << "The price of the item is " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop ::displayItem()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of your item id no " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop s1;
    s1.init();
    s1.setItem();
    s1.setItem();
    s1.setItem();
    s1.displayItem();
    return 0;
}