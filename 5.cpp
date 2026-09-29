#include<iostream>
using namespace std;
class airthmetic_op{
    private:
        int a=50;
        int b=20;
    public:
        int add(){
            cout<<"\n Addition : "<<a+b <<"\n";}
        int sub(){
            cout<<"\n Subtract : "<<a-b <<"\n";}
        int mlt(){
            cout<<"\n Multiplaction : "<<a*b <<"\n";}
        int div(){
            cout<<"\n Division : "<<a/b <<"\n";}
        int mod(){
            cout<<"\n Modulus : "<<a%b <<"\n";}};
int main(){
    airthmetic_op a1;
    cout<<"\nAirthmetic calculations on value 20 and 50 \n";
    a1.add();
    a1.sub();
    a1.mlt();
    a1.div();
    a1.mod();}