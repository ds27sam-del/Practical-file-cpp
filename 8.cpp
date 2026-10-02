#include <iostream>
#include <string>
using namespace std;
class String {
    string str;
public:
    String(string s = "") : str(s) {}
    void show() { cout << str << endl; }
    int findSub(string sub) { return str.find(sub); }
    int compare(String& o) { return str.compare(o.str); }};
int main() {
    String s1("Hello"), s2("Programming"), s3("World");
    String s4 = s2;
    cout << "s4: "; s4.show();
    cout << "Index of 'Prog': " << s2.findSub("Prog") << endl;
    int cmp = s2.compare(s3);
    cout << (cmp == 0 ? "Equal" : (cmp < 0 ? "s2 < s3" : "s2 > s3")) << endl;}
