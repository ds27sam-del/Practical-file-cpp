#include<iostream>
using namespace std;
class factorial{
    private:
        int c;
        int fact;
    public:
        factorial(){
            cout<<"Enter the value to calculate factorial : ";
            cin>>c;
            fact=1;        }
        void cal_fact(){
            if (c < 0) {
            cout << "Invalid input! Factorial is not defined for negative numbers.\n";
            return;            }   
            for(int i=c;i>=1;i--){
                fact*=i;            }
            cout<<"Result is : "<< fact<<"\n";}};
int main(){
    factorial f1;
    f1.cal_fact();
    return 0;}