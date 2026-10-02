#include <iostream>
using namespace std;
class ArrayAvg {
 int n, arr[50];
public:
 void calc() {
 cout << "Enter size: "; cin >> n;
 float sum = 0;
 for (int i = 0; i < n; i++) {
 cout << "Val " << i + 1 << ": "; cin >> arr[i];
 sum += arr[i]; }
 cout << "Average: " << sum / n << endl;}};
int main() {
 ArrayAvg a;
 a.calc();}
