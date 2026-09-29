#include<iostream>
#include<string>
using namespace std;
class ticket_p{
    private:
        int age=0;
    public:
        int price(){
            cout<<"\nEnter your age : ";
            cin>>age;
            string result = age<=12 ? "100 rs" : "200 rs";
            cout<<"Ticket price is : " << result ;}};
int main(){
        ticket_p p;
        cout<<"==== Ticket Price ====";
        p.price();
    return 0;}