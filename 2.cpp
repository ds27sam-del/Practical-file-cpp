#include <iostream>
using namespace std;
class Factorial {
 int n;
public:
 void calc() {
 cout << "Enter number: "; cin >> n;
 if (n < 0) { cout << "Invalid input\n"; return; }
 long fact = 1;
 for (int i = 1; i <= n; i++) fact *= i;
 cout << "Factorial: " << fact << endl; }};
int main() {
 Factorial f;
 f.calc();}
