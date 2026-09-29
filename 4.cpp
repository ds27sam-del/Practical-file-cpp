#include<iostream>
using namespace std;
class matrix_t{
    public:
        int original[2][2]={
            {1,2},
            {3,4}};
        int transposed[2][2];
    public:
        void matrix(){
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    transposed[j][i] = original[i][j];}}}
        void disp(){
            cout << "Transposed Matrix (2 x 2) \n";
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    cout << transposed[i][j] << " ";}
                cout << "\n";}}};
int main(){
    matrix_t m1;
    m1.matrix();
    m1.disp();
    return 0;}