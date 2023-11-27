#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    // deafult constructor
    Hero()
    {
        cout << "Constructor Called" << endl;
    }

    // Paremeterized constructor
    Hero(int health)
    {
        cout << "this -> " << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // Member Function
    void print()
    {
        cout << health << endl
             << level << endl;
    }

    void setLevel(char l)
    {
        level = l;
    }

    void setHealth(int h)
    {
        health = h;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }
};

int main()
{
    // Object Creation statically
    Hero Rahul(10);
    cout << Rahul.getHealth() << endl;
    cout << "Address Of Hero Object" << &Rahul << endl;

    // Object Creation dynamically
    Hero *h1 = new Hero(50, 'B');
    h1->print();

    Hero Rohan(100, 'A');
    cout << Rohan.getHealth() << endl
         << Rohan.getLevel() << endl;
}