#include <iostream>
using namespace std;
class Ticket {
    int age;
public:
    void calculate() {
        cout << "Enter age: ";
        cin >> age;
        cout << "Ticket Price: " << (age < 12 ? "100 rs" : "200 rs") << endl;}};
int main() {
    cout << "==== Ticket Price ====\n";
    Ticket t;
    t.calculate();
    return 0;}