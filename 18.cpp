#include <iostream>
using namespace std;
int main() {
 string user, pass;
 cout << "User: "; cin >> user;
 cout << "Pass: "; cin >> pass;
 bool login = (user == "admin" && pass == "1234");
 cout << "Status: " << login << (login ? "\nWelcome back Sir" : "\nLogin denied") << endl;}
