#include <iostream>
using namespace std;
class fun_overloading {
public:
    void cal(double radius) {
        double area_circle = 3.14159 * radius * radius;
        cout << "\nArea of the circle: " << area_circle << "\n";}
    void cal(int l, int b) {
        int area_rectangle = l * b;
        cout << "\nArea of the rectangle: " << area_rectangle << "\n";}
    void cal(double base, double height) {
        double area_parallelogram = base * height;
        cout << "\nArea of the parallelogram: " << area_parallelogram << "\n";}};
int main() {
    fun_overloading f1;
    f1.cal(10.0);        
    f1.cal(10, 20);     
    f1.cal(20.0, 25.0); 
    return 0;}