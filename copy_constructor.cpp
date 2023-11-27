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

    // Copy Constructor
    Hero(Hero &temp)
    {
        cout << "Copy Constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
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
    // Creation Of Object
    Hero Ramesh(100, 'A');
    Ramesh.print();
    // Copy
    Hero Suresh(Ramesh);
    Suresh.print();

    // Behind the scenes
    // Suresh.health = Ramesh.health;
    // Suresh.level = Ramesh.level;
}
