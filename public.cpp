#include <iostream>
using namespace std;

class Circle
{
public:
    int radius;

    void setRadius(int r)
    {
        this->radius = r;
    }

    void computeArea()
    {
        cout << "Area Of Circle is :- " << 3.14 * radius * radius << endl;
    }

    void computeCircuference();
};

// Outside class member function
void Circle ::computeCircuference()
{
    cout << "Circumference of circle is :- " << 2 * 3.14 * radius << endl;
};

int main()
{
    Circle Obj;

    Obj.setRadius(5);
    Obj.computeArea();
    Obj.computeCircuference();
}