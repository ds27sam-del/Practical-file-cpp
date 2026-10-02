#include <iostream>
using namespace std;
class Arithmetic {
 int a = 50, b = 20;
public:
void display() {
cout << "Add: " << a + b << "\nSub: " << a - b
<< "\nMul: " << a * b << "\nDiv: " << a / b
<< "\nMod: " << a % b << endl;}};
int main() {
 Arithmetic obj;
 obj.display();}
