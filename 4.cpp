#include <iostream>
using namespace std;
class Matrix {
 int a[2][2] = {{1, 2}, {3, 4}};
public:
void transpose() {
cout << "Transposed:\n";
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 2; j++) cout << a[j][i] << " ";
cout << endl; } }};
int main() {
 Matrix m;
 m.transpose();}
