#include <iostream>
using namespace std;
class Complex {
 int a, b;
public:
 Complex(int x = 0, int y = 0) : a(x), b(y) {}
 Complex operator-(Complex c) {
 return Complex(a - c.a, b - c.b); }
 void show() { cout << a << " " << b << endl; }};
int main() {
 Complex c1(20, 30), c2(10, 50), c3;
 c3 = c1 - c2;
 c3.show();}
