#include <iostream>
using namespace std;
class ATM {
    int balance = 10000;
public:
    void check() { cout << "Balance: " << balance << endl; }
    void deposit(int amt) { balance += amt; cout << "Balance: " << balance << endl; }
    void withdraw(int amt) {
        if (amt > balance) cout << "Insufficient funds\n";
        else { balance -= amt; cout << "Remaining: " << balance << endl; }}};
int main() {
    ATM atm;
    int ch, amt;
    do {
        cout << "\n1.Check 2.Deposit 3.Withdraw 4.Exit: "; cin >> ch;
        switch (ch) {
            case 1: atm.check(); break;
            case 2: cout << "Amount: "; cin >> amt; atm.deposit(amt); break;
            case 3: cout << "Amount: "; cin >> amt; atm.withdraw(amt); break;        }
    } while (ch != 4);}
