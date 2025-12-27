#include <iostream>
using namespace std;
class DataPerson
{
private:
static int counter;

    string _Id;
    string _F_Name;
    string _L_Name;
    string _fullName;
    string _Email;
    string _phone;
    
public:
DataPerson( string F_Name, string L_Name,  string Email, string phone) 
{
    _Id = to_string(counter++);
    _F_Name = F_Name;
    _L_Name = L_Name;
    _Email = Email;
    _phone = phone;
}
string Id(){
    return _Id;
}

    void SetF_Name(string F_Name)
    {
        _F_Name = F_Name;
    }
    string getF_Name(){
        return _F_Name;
    }
    void SetL_Name(string L_Name)
    {
        _L_Name = L_Name;
    }
    string getL_Name(){
        return _L_Name;
    }
    void SetEmail(string Email)
    {
        _Email = Email;
    }
    string getEmail(){
        return _Email;
    }
    void Setphone(string phone)
    {
        _phone = phone;
    }
    string getphone(){
        return _phone;
    }
    
   
    void SendEmail(string subject, string body)
    {
        cout << "The following email has been sent " << _Email << endl;
        cout<< "Subject: " << subject << endl;
        cout << "Body: " << body << endl;
    }
    void SendSMS(string subject,string message)
    {
        cout << "The following SMS has been sent " << _phone << endl;
        cout << "Subject: " << subject << endl;
        cout << "Message: " << message << endl;
    }
     string getfullName(){
       return _F_Name + " " + _L_Name;
    }

    void print(){
        cout << "Id: " << _Id << endl;
        cout << "F_Name: " << _F_Name << endl;
        cout << "L_Name: " << _L_Name << endl;
        cout << "fullName: " << getfullName() << endl;
        cout << "Email: " << _Email << endl;
        cout << "phone: " << _phone << endl;
    }
};
class Employee : public DataPerson
{
private:
string _Department;
string _Title;
    int _salary;
public:
    Employee(string F_Name, string L_Name, string Email, string phone, int salary, string Department, string Title) : DataPerson(F_Name, L_Name, Email, phone)
    {
        _salary = salary;
        _Department = Department;
        _Title = Title;
    }
    void print()
    {
        DataPerson::print();
        cout << "Salary: " << _salary << endl;
        cout << "Department: " << _Department << endl;
        cout << "Title: " << _Title << endl;
    }
};
class Programmer : public Employee
{
    string _language;
    public:
    Programmer(string F_Name, string L_Name, string Email, string phone, int salary, string Department, string Title, string language) : Employee(F_Name, L_Name, Email, phone, salary, Department, Title)
    {
        _language = language;
    }
    void print()
    {
        Employee::print();
        cout << "Language: " << _language << endl;
    }
};
 int DataPerson::counter = 1;
int main(){
    DataPerson person("Ahmed","Hamed","Hamed@.com","0101234567");
    person.SendEmail("Hello","Hi");
    person.SendSMS("Hello","Hi");
    person.print();

    Employee employee("Ahmed","Hamed","Hamed@.com","0101234567",5000,"IT","Developer");
    employee.SendEmail("Hello","Hi");
    employee.SendSMS("Hello","Hi");
    employee.print();

    Programmer programmer("Ahmed","Hamed","Hamed@.com","0101234567",5000,"IT","Developer","C++");
    programmer.SendEmail("Hello","Hi");
    programmer.SendSMS("Hello","Hi");
    programmer.print();
    return 0;
}