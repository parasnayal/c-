// Dynamic initialization of objects using constructor

#include <iostream>
using namespace std;

class BankDeposit
{
private:
    int principal, year, R;
    float r, returnAmount;

public:
    BankDeposit(){};
    BankDeposit(int amount, int y, int rate);
    BankDeposit(int amount, int y, float r);
    void showReturnAmount(void);
};

BankDeposit ::BankDeposit(int amount, int y, int rate)
{
    principal = amount;
    year = y;
    R = rate;
    returnAmount = principal;
    for (int i = 0; i < y; i++)
    {
        returnAmount = returnAmount + returnAmount * R / 100;
    }
}
BankDeposit ::BankDeposit(int amount, int y, float rate)
{
    principal = amount;
    year = y;
    r = rate;
    returnAmount = principal;
    for (int i = 0; i < y; i++)
    {
        returnAmount = returnAmount * (1 + r);
    }
}

void BankDeposit ::showReturnAmount()
{
    cout << "The return amount after " << year << " year is => " << returnAmount << endl;
}
int main()
{
    BankDeposit b1, b2;
    int amount, year, rate;
    float interestRate;
    cout << "Enter the amount , time and interest rate " << endl;
    cin >> amount >> year >> rate;
    b1 = BankDeposit(amount, year, rate);
    b1.showReturnAmount();

    cout << "Enter the amount , time and interest rate " << endl;
    cin >> amount >> year >> interestRate;
    b2 = BankDeposit(amount, year, interestRate);
    b2.showReturnAmount();
    return 0;
}