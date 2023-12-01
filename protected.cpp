#include <iostream>
using namespace std;

// Creation Of Class
class Parent
{
protected:
    int protected_id;
};

// sub class or derived class from public base class
class child : public Parent
{
public:
    void setId(int id)
    {
        this->protected_id = id;
    }

    void display()
    {
        cout << "The Protected id is : " << protected_id << endl;
    }
};

int main()
{
    // Creation Of Object
    child obj;

    obj.setId(100);
    obj.display();
}