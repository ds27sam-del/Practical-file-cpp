#include <iostream>
using namespace std;
class Animal {
public:
    virtual void speak() const {
        cout << "Animal makes a sound.\n";}};
class Dog : public Animal {
public:
    void speak() const override {
        cout << "Dog barks: Woof! Woof!\n";}};
class Cat : public Animal {
public:
    void speak() const override {
        cout << "Cat meows: Meow! Meow!\n";}};
int main() {
    Animal* ptr;
    Dog dog;
    Cat cat;
    ptr = &dog;
    ptr->speak();
    ptr = &cat;
    ptr->speak();
    return 0;}