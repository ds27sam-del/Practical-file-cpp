#include <iostream>
using namespace std;
class Shape {
public:
 void area(double r) { cout << "Circle: " << 3.14159 * r * r << endl; }
 void area(int l, int b) { cout << "Rectangle: " << l * b << endl;}
 void area(double b, double h) { cout << "Parallelogram: " << b * h << endl; }};
int main() {
 Shape s;
 s.area(10.0);
 s.area(10, 20);
 s.area(20.0, 25.0);}
