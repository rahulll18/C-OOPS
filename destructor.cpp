#include <iostream>
#include <cstring>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;

    // deafult constructor
    Hero()
    {
        cout << "Constructor Called" << endl;
        name = new char[100];
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
        // deep copy
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        cout << "Copy Constructor called" << endl;
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    // Member Function
    void print()
    {
        cout << "[ name : " << this->name << ", ";
        cout << "health : " << this->health << ", ";
        cout << "level : " << this->level << "]" << endl;
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

    void setName(char name[])
    {
        this->name = name;
    }

    ~Hero()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    // Static Memory Allocation
    Hero a;

    // For Dynamic memory Alloction
    Hero *b = new Hero();

    // Deallocate
    delete b;
}