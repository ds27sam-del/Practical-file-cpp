#include <iostream>
using namespace std;
class arop {
public:
    int c;
    int sum;
    int arr[1];
    arop() {
        cout << "Enter the size of array (up to 1): ";
        cin >> c;
        sum = 0;}
    void avg() {
        for (int i = 0; i < c; i++) {
            cout << "Enter the value for index " << i + 1 << " : ";
            cin >> arr[i];}
        for (int i = 0; i < c; i++) {
            sum += arr[i];}     
        float average = (float)sum / c;
        cout << "\nAverage of array is : " << average << endl;}};
int main() {
    arop a1;
    a1.avg();
    return 0;}