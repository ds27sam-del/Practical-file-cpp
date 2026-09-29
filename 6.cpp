#include <iostream>
#include <string>
using namespace std;
class student {
public:
    string name;
    int standard;
    double result;
    student(string n, int s, double r) {
        name = n;
        standard = s;
        result = r;}
    student() {
        name = "Unknown";
        standard = 0;
        result = 0.0;}
    void disp() {
        cout << "\n Details of student \n";
        cout << "********************* \n";
        cout << "Name   : " << name;
        cout << "\nClass  : " << standard;
        cout << "\nResult : " << result << "%";
        cout << "\n*******************\n";}};
int main() {
    student s1("Aman", 12, 89.5);
    s1.disp();
    student s2;
    s2.disp();
    return 0;}