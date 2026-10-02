#include <iostream>
using namespace std;
float calculateAverage(float marks[], int n) {
 float sum = 0;
 for (int i = 0; i < n; i++) sum += marks[i];
 return sum / n;}
int main() {
 float marks[10];
 cout << "Enter 10 marks:\n";
 for (int i = 0; i < 10; i++) cin >> marks[i];
 cout << "Average: " << calculateAverage(marks, 10) << endl;}
