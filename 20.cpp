#include <iostream>
using namespace std;
int main() {
    int code, qty, price = 0;
    string item;
    cout << "1.Pizza(250) \n2.Burger(120) \n3.Sandwich(100) \n4.ColdDrink(50) \n5.Coffee(80)\nChoice & Qty: ";
    cin >> code >> qty;
    switch (code) {
        case 1: item = "Pizza"; price = 250; break;
        case 2: item = "Burger"; price = 120; break;
        case 3: item = "Sandwich"; price = 100; break;
        case 4: item = "Cold Drink"; price = 50; break;
        case 5: item = "Coffee"; price = 80; break;
        default: cout << "Invalid code\n"; return 0;    }
    cout << "Item: " << item << "\nTotal: Rs. " << price * qty << endl;}
