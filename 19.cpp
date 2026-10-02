#include <iostream>
using namespace std;
int main() {
 float per, income;
 cout << "Percentage & Income: "; cin >> per >> income;
 cout << (per >= 80 && income < 200000 ? "Eligible for scholarship" : "Not Eligible") << endl;}
