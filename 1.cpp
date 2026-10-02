#include <iostream>
using namespace std;
class MaxVal {
 int a[12] = {100, 20, 10, 40, 60, 80, 90, 40, 50, 10, 20, 110};
 int max = 0;
public:
 void findMax() {
 for (int x : a)
 if (x > max && x != max) max = x;
 cout << "Max: " << max << endl; }};
int main() {
 MaxVal obj;
 obj.findMax();}
