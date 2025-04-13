// Inheritance defines an "is-a" relationship where a subclass inherits properties and behaviors
// (methods) from a superclass.

#include<iostream>
#include<string>
using namespace std;

class Animal{
   public:
   virtual void eat() const {
         cout << "Animal is eating." << endl;
   }
};

class Dog : public Animal{
   public:
   void eat() const override {
         cout << "Dog is eating." << endl;
   }
   void bark() const {
         cout << "Dog is barking." << endl;
   }
};

class Cat : public Animal{
   public:
   void eat() const override {
         cout << "Cat is eating." << endl;
   }
   void meow() const {
         cout << "Cat is meowing." << endl;
   }
};

int main(){
    Animal* animal = new Animal();
    Dog* dog = new Dog();
    Cat* cat = new Cat();

    animal->eat(); // Output: Animal is eating.
    dog->eat(); // Output: Dog is eating.
    dog->bark(); // Output: Dog is barking.
    cat->eat(); // Output: Cat is eating.
    cat->meow(); // Output: Cat is meowing.

    delete animal;
    delete dog;
    delete cat;

    return 0;
}