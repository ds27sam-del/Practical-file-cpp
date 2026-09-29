#include <iostream>
using namespace std;
class Distance {
private:
    int feet;
    float inches;
public:
    Distance() : feet(0), inches(0.0) {}
    Distance(float totalInches) {
        feet = static_cast<int>(totalInches) / 12;
        inches = totalInches - (feet * 12);}
    void display() const {
        cout << feet << " feet " << inches << " inches\n";}};
int main() {
    float totalInches = 75.5;
    Distance d = totalInches;
    cout << totalInches << " inches converted to Distance:\n";
    d.display();
    return 0;}