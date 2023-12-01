#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;

public:
    // public member function
    void setRadius(double r)
    {
        this->radius = r;
    }

    void compute()
    {
        cout << "Area of circle is :- " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Circle obj;

    obj.setRadius(1.5);
    obj.compute();
}
