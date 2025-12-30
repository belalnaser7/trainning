#include<iostream>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    Person(){};  // dummy constructor
    Person(string name,int age) // parameterized constructor
    {
        this->name=name;
        this->age=age;
    }
    void print()
    {
        cout<<name<<" "<<age<<endl;
    }
};
int main()
{   Person p[7]; // static array
    for (int i=0;i<7;i++) // initialization of static array
    {
        p[i]=Person("name"+to_string(i),i);
    }
    for (int i=0;i<7;i++)
    {
        p[i].print();
    }
    Person *arr=new Person[5];  // dynamic array
    for(int i=0;i<5;i++)  // initialization of dynamic array
    {
       arr[i]=Person("name"+to_string(i),i);
    }
    for (int i=0;i<5;i++)
    {
        arr[i].print();
    }
    delete[] arr;

    return 0;
}