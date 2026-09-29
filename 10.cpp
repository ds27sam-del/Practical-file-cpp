#include<iostream>
using namespace std;
class complex {
    private:
        int a, b;
    public:
        void setdata(int x, int y) {
            a = x;
            b = y;}
        complex operator - (complex c) {
            complex temp;
            cout << "Left operand (c1): a = " << a << ", b = " << b << "\n";
            cout << "Right operand (c2): a = " << c.a << ", b = " << c.b << "\n";
            temp.a = a - c.a;
            temp.b = b - c.b;
            return temp;}
        void showdata() {
            cout << "Value of a and b is " << a << " " << b << "\n";}};
int main() {
    complex c1, c2, c3;
    c1.setdata(20, 30);
    c2.setdata(10, 50);
    c3 = c1 - c2;
    c3.showdata();
    return 0;}