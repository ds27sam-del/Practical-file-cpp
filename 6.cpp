#include <iostream>
using namespace std;
class Student {
 string name;
 int standard;
 double result;
public:
 Student(string n = "Unknown", int s = 0, double r = 0.0) 
 : name(n), standard(s), result(r) {}
 void disp() {
 cout << "Name: " << name << " | Class: " << standard 
 << " | Result: " << result << "%\n"; }};
int main() {
 Student s1("Aman", 12, 89.5), s2;
 s1.disp();
 s2.disp();}
