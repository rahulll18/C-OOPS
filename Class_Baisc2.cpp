#include<iostream>
using namespace std;

class Hero{

    // Data Members / Properties
    public:
    int health;
    char level;
};

int main()
{
    Hero Hobj;

    Hobj.health = 50;
    Hobj.level = 'A';

    cout << "Health is : " << Hobj.health << endl;
    cout << "Level is : " << Hobj.level << endl;
}