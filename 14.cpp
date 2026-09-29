#include <iostream>
#include <string>
using namespace std;
class Employee {
    protected:
        string name;
        int id;
    public:
        void getEmployeeDetails(string n, int i) {
            name = n;
            id = i;}
        void displayEmployee() const {
            cout << "ID: " << id << ", Name: " << name << "\n";}};
    class Developer : public Employee {
    private:
        string language;
    public:
        void setDeveloper(string n, int i, string lang) {
            getEmployeeDetails(n, i);
            language = lang;}
        void displayDeveloper() const {
            displayEmployee();
            cout << "Role: Developer, Primary Language: " << language << "\n\n";}};
class Manager : public Employee {
    private:
        int teamSize;
    public:
        void setManager(string n, int i, int size) {
            getEmployeeDetails(n, i);
            teamSize = size;}
        void displayManager() const {
            displayEmployee();
            cout << "Role: Manager, Team Size: " << teamSize << "\n\n";}};
int main() {
    Developer dev;
    Manager mgr;
    dev.setDeveloper("Saumya Kumar", 101, "Python");
    mgr.setManager("Kushal", 102, 8);
    cout << "--- Developer Info ---\n";
    dev.displayDeveloper();
    cout << "--- Manager Info ---\n";
    mgr.displayManager();
    return 0;}