#include <iostream>
using namespace std;
class clPrison
{
    int _Id = 0;
    string _Name = "";
    string _Crime = "";
    short _Age = 0;

public:
    clPrison(int Id, string Name, string Crime, short Age)
    {
        while (true)
        {
            if (Age >= 18 && Id > 0)
            {
                break;
            }
            else if (Age <= 18)
            {
                cout << " Enter the age greater than 18 :- ";
                cin >> Age;
            }
            else
            {
                cout << "Enter the Id greater than 0:-";
                cin >> Id;
            }
        }

        _Id = Id;
        _Name = Name;
        _Crime = Crime;
        _Age = Age;
    }
    void print()
    {
        cout << "The Prisoner name is :- " << _Name << endl;
        cout << "the Prisoner Id is :- " << _Id << endl;
        cout << "The Prisoner Crime is :- " << _Crime << endl;
        cout << "The Prisoner Age is :-" << _Age << endl;
    }
};

int main()
{
    clPrison Prisoner1(0, "Ahmed", "Killing", 15);
    Prisoner1.print();
    clPrison Prisoner2 = Prisoner1;
    Prisoner2.print();

    return 0;
}