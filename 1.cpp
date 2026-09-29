#include<iostream>
using namespace std;
class max_val{
    private:
        int a1[12]={100,20,10,40,60,80,90,40,50,10,20,110};
        int max_value=0;
    public:
        int result(){
            for(int i = 0;i<=11;i++){
                if (a1[i]>max_value && a1[i]!=max_value){
                    max_value=a1[i];}}
        cout<<"\n************************"<<"\n";
        cout<<"Result is : "<<max_value<<"\n";
        cout<<"************************"<<"\n";}};
int main(){
    max_val v1;
    v1.result();
    return 0;}