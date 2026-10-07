#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accHolderName;
    float balance;

public:
    BankAccount(string name) : accHolderName(name), balance(0.00) {}

    void depositMoney(float deposit)
    {
        balance += deposit;
    }

    bool withdrawMoney(float withdraw)
    {
        if (withdraw > balance)
            return false;

        balance -= withdraw;
        return true;
    }

    float checkBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount a1("Krish");
    BankAccount a2("Rahul");

    a1.depositMoney(1000);
    a2.depositMoney(500);

    a1.withdrawMoney(200);

    cout << "Balance of Krish : Rs. " << a1.checkBalance() << endl;
    cout << "Balance of Rahul : Rs. " << a2.checkBalance() << endl;

    return 0;
}
