#include <iostream>
using namespace std;
class hospital
{
    string _name = "";
    string _address = "";
    string _phone = "";
    string _email = "";

public:
    hospital(string _name, string _address, string _phone, string _email)
    {
        this->_name = _name;
        this->_address = _address;
        this->_phone = _phone;
        this->_email = _email;
    }
    void setName(string _name)
    {
        this->_name = _name;
    }
    void setAddress(string _address)
    {
        this->_address = _address;
    }
    void setPhone(string _phone)
    {
        this->_phone = _phone;
    }
    void setEmail(string _email)
    {
        this->_email = _email;
    }
    //------ chain calls ------
    hospital &name(string _name)
    { // return the object itself
        this->_name = _name;
        return *this;
    }
    hospital &address(string _address)
    { // return the object itself
        this->_address = _address;
        return *this;
    }
    hospital &phone(string _phone)
    { // return the object itself
        this->_phone = _phone;
        return *this;
    }
    hospital &email(string _email)
    { // return the object itself
        this->_email = _email;
        return *this;
    }
    

    void print()
    {
        cout << "Name: " << _name << endl;
        cout << "Address: " << _address << endl;
        cout << "Phone: " << _phone << endl;
        cout << "Email: " << _email << endl;
    }
};
int main()
{
    hospital( "H1", "Cairo", "010", "@gmail.com"); //temporary object 
    hospital h1("H1", "Cairo", "010", "@gmail.com"); //
    h1.name("H2").address("Alex").phone("011").email("google.com").print(); // chain calls
    return 0;
}