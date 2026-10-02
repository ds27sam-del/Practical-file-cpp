#include <iostream>
using namespace std;
class Distance {
 int feet;
 float inches;
public:
 Distance(float totalInches = 0) {
 feet = (int)totalInches / 12;
 inches = totalInches - (feet * 12); }
 void show() const { cout << feet << " feet " << inches << " inches\n"; }};
int main() {
 float totalInches = 75.5;
 Distance d = totalInches;
 d.show();}
