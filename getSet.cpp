#include <iostream>
using namespace std;

class Hero
{
    // Access Modifiers
private:
    int health;

public:
    char level;

    // Getter and Setter
    void setLevel(char l)
    {
        level = l;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    int getHealth()
    {
        return health;
    }
};

int main()
{
    Hero Hobj;
    Hobj.setLevel('A');
    Hobj.setHealth(50);

    cout << "Health is : " << Hobj.getHealth() << endl;
    cout << "Level is : " << Hobj.getLevel() << endl;
}