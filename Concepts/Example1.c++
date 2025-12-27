#include <iostream>
#include <string>
#include <vector>
using namespace std;
enum Gender
{
    Male=1,
    Female=2
};
class DataPerson
{
private:
 Gender M_f;
public:
    string FullName;
    string Address;
    string Phone;
    float Age;
    int salary=5000;
    void SetDate(string massage, string DateType)
    {
       cout << massage << endl;
       if (DateType == "FullName")
       {
           cin >> FullName;
       }
       else if (DateType == "Address")
       {
           cin >> Address;
       }
       else if (DateType == "Phone")
       {
           cin >> Phone;
       }
       else if (DateType == "Age")
       {
           cin >> Age;
       }
    }
    Gender GetGender()
    {
       int gender;
       cout << "Enter Gender" << endl;
       cin >> gender;
       return (Gender)gender;
    }
    void getDate()
    {
        SetDate("Enter FullName", "FullName");
        SetDate("Enter Address", "Address");
        SetDate("Enter Phone", "Phone");
        SetDate("Enter Age", "Age");
        Gender gender=GetGender();
        cout << "FullName: " << FullName << endl;
        cout << "Address: " << Address << endl;
        cout << "Phone: " << Phone << endl;
        cout << "Age: " << Age << endl;
        cout << "Gender: ";
        if (gender == Male)
        {
            cout << "Male" << endl;
        }
        else
        {
            cout << "Female" << endl;
        }
    }
    
    
};
 int main()
{
    DataPerson person;
    person.getDate();

    return 0;
}