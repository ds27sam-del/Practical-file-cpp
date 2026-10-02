#include <iostream>
using namespace std;
class Employee {
protected:
    string name;
    int id;
public:
    void set(string n, int i) { name = n; id = i; }
    void show() const { cout << "ID: " << id << ", Name: " << name << endl; }};
class Developer : public Employee {
    string lang;
public:
    void setDev(string n, int i, string l) { set(n, i); lang = l; }
    void showDev() const { show(); cout << "Language: " << lang << endl; }};
class Manager : public Employee {
    int size;
public:
    void setMgr(string n, int i, int s) { set(n, i); size = s; }
    void showMgr() const { show(); cout << "Team Size: " << size << endl; }};
int main() {
    Developer d; Manager m;
    d.setDev("Saumya", 101, "C++");
    m.setMgr("Kushal", 102, 8);
    d.showDev();
    m.showMgr();}
