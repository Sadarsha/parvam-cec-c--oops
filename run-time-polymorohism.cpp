

#include <iostream>
using namespace std;

class Base
{
public:
    void showBase()
    {
        cout << "Base mamber function has been called!" << endl;
    }
};

class Derived : public Base
{ // function             overloading
public:
    void showBase()
    {
        cout << "Derived member function has been called!" << endl;
    }
};
class Animal
{
public:
    void makeSound()
    {
        cout << "  animal makes some sound!" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "  dog barks!" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << " cat meows!" << endl;
    }
};

int main()
{
    // Base b1;
    //  b1.showBase();

    Derived d1;
    d1.showBase();

    Dog dog1;
    dog1.makeSound();

    Cat cat1;
    cat1.makeSound();
}
