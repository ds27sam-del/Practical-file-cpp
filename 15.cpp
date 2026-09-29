#include <iostream>
using namespace std;
class ATM {
private:
    int balance_current = 10000;
public:
    void check_balance() {
        cout << "\nYour current balance is: " << balance_current << "\n";}
    void dep_money() {
        int d_money = 0;
        cout << "\nEnter the amount to deposit: ";
        cin >> d_money;
        if (d_money <= 0) {
            cout << "Invalid deposit amount!\n";
            return;}
        balance_current += d_money;
        cout << "Operation successful! New balance: " << balance_current << "\n";}
    void withdraw_money() {
        int w_draw = 0;
        cout << "\nEnter the amount to withdraw: ";
        cin >> w_draw;
        if (w_draw <= 0) {
            cout << "Invalid withdrawal amount!\n";
        } else if (w_draw > balance_current) {
            cout << "Insufficient funds! Current balance: " << balance_current << "\n";
        } else {
            balance_current -= w_draw;
            cout << "Operation successful! Remaining balance: " << balance_current << "\n";}}};
int main() {
    int choice;
    ATM atm;
    bool isRunning = true;
    do {
        cout << "\n========== ATM MENU ==========\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) {
            case 1:
                atm.check_balance();
                break;
            case 2:
                atm.dep_money();
                break;
            case 3:
                atm.withdraw_money();
                break;
            case 4: {
                int exitChoice;
                cout << "Do you want to exit? (1 = Yes, 0 = No): ";
                cin >> exitChoice;
                if (exitChoice == 1) {
                    cout << "Thank you for using our ATM. Goodbye!\n";
                    isRunning = false;}
                break;}
            default:
                cout << "Invalid input. Please choose a valid option (1-4).\n";
                break;}
    } while (isRunning);
    return 0;}