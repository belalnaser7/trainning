#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;
class DataPerson
{
    private:
    string _Id;
        int _age;
        string _fullName;
        string _address;
        string _phone;

    public:
    /* Properties  setters*/
    void SetId(string id)
    {
        _Id=id;
    }
    void SetAge(int age)
    {
        if (age<10)
        {
            throw invalid_argument("Age must be greater than 10");
        }
        
        _age=age;
    }
    void SetFullName(string fullName)
    {
        _fullName=fullName;
    }
    void SetAddress(string address)
    {
        _address=address;
    }
    void SetPhone(string phone)
    {
        _phone=phone;
    }

    /* Properties  getters*/
    string GetId()
    {
        return _Id;
    }
    int GetAge()
    {
        return _age;
    }
    string GetFullName()
    {
        return _fullName;
    }
    string GetAddress()
    {
        return _address;
    }
    string GetPhone()
    {
        return _phone;
    }
      __declspec(properties(get=GetAddress, put=SetAddress)) string Address;
};
int ReadAge()
{
    int age;
    while(true)
    {
        cout << "Enter age (>=10): ";
        cin >> age;
        if(age >= 10)
            return age;
        else
            cout << "Invalid age, try again.\n";
    }
}

int main()
{
    DataPerson person;
    string name ="";
    cout<<"Enter your name: ";
    getline(cin,name);
    person.SetId("1234");
    try
    {
        person.SetAge(ReadAge());
    }  
    catch(exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    person.SetFullName(name);
   person.Address="Cairo";
    person.SetPhone("0123456789");
    cout<<"Id: "<<person.GetId()<<endl;
    cout<<"Age: "<<person.GetAge()<<endl;
    cout<<"FullName: "<<person.GetFullName()<<endl;
    cout<<"Address: "<<person.Address<<endl;
    cout<<"Phone: "<<person.GetPhone()<<endl;
    return 0;
}