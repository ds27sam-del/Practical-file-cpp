#include <iostream>
using namespace std;
class Animal {
public:
 virtual void speak() const { cout << "Animal sound\n"; }};
class Dog : public Animal {
public:
 void speak() const override { cout << "Dog: Woof!\n"; }};
class Cat : public Animal {
public:
 void speak() const override { cout << "Cat: Meow!\n"; }};
int main() {
 Animal* ptr;
 Dog dog; Cat cat;
 ptr = &dog; ptr->speak();
 ptr = &cat; ptr->speak();}
