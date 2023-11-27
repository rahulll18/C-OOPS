#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

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

    char getLevel(){
        return level;
    }
};

int main()
{
    //static way allocation
    Hero hero1;
    hero1.setHealth(100);
    hero1.setLevel('A');

    cout << "Health is " << hero1.getHealth() << endl;
    cout << "Level is " << hero1.getLevel() << endl;

    //Dynamic Way allocation

    Hero* hero2 = new Hero;
    hero2->setHealth(80);
    hero2->setLevel('B');

    cout << "Health is " << (*hero2).getHealth() << endl;
    cout << "Level is " << (*hero2).getLevel() << endl;

    cout << "Health is " << hero2->getHealth() << endl;
    cout << "Level is " << hero2->getLevel() << endl;
}