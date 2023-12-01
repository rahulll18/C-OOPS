#include <iostream>
using namespace std;

class Student
{
public:
    char name[40];
    int stu_id;
    int roll_no;

    // Default Contructor
    Student()
    {
        cout << "Deafult Contructor Called" << endl;
    }

    Student(int stuID, int rollNo)
    {
        cout << "Parameterized Constructor Called" << endl;
        this->stu_id = stuID;
        this->roll_no = rollNo;
    }


    Student();
    void display();
};

// Outside the class member function defined
void Student ::display()
{
    cout << "Name is-> " << name << endl;
    cout << "ID is -> " << stu_id << endl;
    cout << "Roll No -> " << roll_no << endl;
}

int main()
{
    Student S1(001, 61);
    char name[6] = "Rahul";
    S1.display();
}