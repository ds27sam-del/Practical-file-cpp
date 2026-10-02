#include <iostream>
using namespace std;
class Number {
 int a, b;
public:
 void get() { cout << "Enter two numbers: "; cin >> a >> b; }
 inline int getMax() { return (a > b) ? a : b; }};
int main() {
 Number n;
 n.get();
 cout << "Max: " << n.getMax() << endl;}
