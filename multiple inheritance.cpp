#include <iostream>
using namespace std;
 class Animal {
public:
    void sound() { cout << "The animal makes a sound." << endl; }
};

class Mammal {
public:
    void eat() { cout << "The mammal eats." << endl; }
};

class Dog : public Animal, public Mammal {
public:
    void bark() { cout << "The dog barks." << endl; }
};
