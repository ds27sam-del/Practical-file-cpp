#include <iostream>
using namespace std;
class Number {
private:
    int a, b;
public:
    void getNumbers() {
        cout << "Enter two numbers: ";
        cin >> a >> b;}
    inline int getMax() {
        return (a > b) ? a : b;}};
int main() {
    Number n;
    n.getNumbers();
    cout << "Maximum number is: " << n.getMax() << "\n";
    return 0;}