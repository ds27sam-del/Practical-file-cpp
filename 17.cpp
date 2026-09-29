#include <iostream>
using namespace std;
float calculateAverage(float marks[], int size) {
    float sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += marks[i];}
    return sum / size;}
int main() {
    int TOTAL_STUDENTS = 10;
    float marks[TOTAL_STUDENTS];
    cout << "=== Enter Marks for 10 Students ===\n";
    for (int i = 0; i < TOTAL_STUDENTS; i++) {
        cout << "Enter marks of student " << (i + 1) << ": ";
        cin >> marks[i];}
    float average = calculateAverage(marks, TOTAL_STUDENTS);
    cout << "\nAverage marks of the class: " << average << endl;
    return 0;}