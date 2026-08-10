#include <bits/stdc++.h>

using namespace std;

class BankAcc
{
private:
    int acc_num;
    string name;
    double balance;

public:
    BankAcc(int num, string name, double first_dep) : acc_num(num), name(name), balance(first_dep)
    {
        // empty constructor
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "The amount has been added:" << amount << endl
             << "The new balance is : " << balance << endl;
    }
    void withdraw(double amount)
    {
        balance -= amount;
        cout << "The amount has been removed:" << amount << endl
             << "The new balance is : " << balance << endl;
    }
    void display()
    {
        cout << "The current balance of " << name << "is : " << balance << endl;
    }
};

int main()
{
    BankAcc Saurbh(10, "Saurabh", 9000.0);
    Saurbh.display();
    Saurbh.deposit(10000);
    Saurbh.display();
    return 0;
}
