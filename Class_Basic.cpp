#include<iostream>
using namespace std;

//Creation Of Class
class Hero{
    // Properties
    // By default in class we have private modifier
    public:
    char level;
    int health;
};

int main()
{
    //Creation Of Object
    Hero h1;

    cout << "size Of h1 Object is : "<< sizeof(h1) << endl;           // 8 Byte
}