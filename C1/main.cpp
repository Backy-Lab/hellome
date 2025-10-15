#include <iostream>

using namespace std;

class Student
{
    public:
    string name;
    Student()
    {
        name="Unknown";

    }

void setData()
{
    cout<<"Enter the name : ";
    cin>>name;
}

void getData()
{
cout<<"Name is : "<<name<<endl;
}

};


int main()
{
   Student s,s1;
   s.setData();
   s.getData();
   s1.getData();
    return 0;
}
