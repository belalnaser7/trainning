#include <iostream>
using namespace std;
class Calculator
{
private:
    int _number = 0;
    int _result = 0;
    int _Type = 0;
    int specialNumber (int number)
    {
       if (number == 0)
       {
           return 1;
       }
       else
       {
           return number ;
       }
    }
   
enum Operation
{
    Adding=1,
    Subtracting=2,
    Multiplying=3,
    Divideing=4,
    Clearing=5
};
public:
    void Add(int number)
    {
        _Type=Operation::Adding;
        _number = _result;
        _result += number;
    }
    void Subtract(int number)
    {
        _Type=Operation::Subtracting;
         _number = _result;
        _result -= number;
    }
    void Multiply(int number)
    {
        _Type=Operation::Multiplying;
         _number = _result;
        _result *= number;
    }
    void Divide(int number)
    {
        _Type=Operation::Divideing;
         _number = _result;
        number = specialNumber(number);
        _result /= number;
    }
    void Clear()
    {
        _Type=Operation::Clearing;
        _number = _result;
        _result = 0;
    }
    void print()
    {
       Operation type = (Operation)_Type;
        switch (type)
        {
        case Operation::Adding:
            cout <<"The result after the addition of " << _number << " is " << _result << ""<< endl;
            break;
        case Operation::Subtracting:
           cout << "The result after the subtraction of " << _number << " is " << _result << ""<< endl;
            break;
        case Operation::Multiplying:
           cout << "The result after the multiplication of " << _number << " is " << _result << ""<< endl;
            break;
        case Operation::Divideing:
            cout << "The result after the division of " << _number << " is " << _result << ""<< endl;
            break;
        case Operation::Clearing:
            cout << "The result after the clearing of " << _number << " is " << _result << ""<< endl;
            break;
        }
    }
   

};
int main()
{
    Calculator calculator;
    calculator.Add(10);
    calculator.print();
    calculator.Subtract(5);
    calculator.print();
    calculator.Multiply(2);
    calculator.print();
    calculator.Divide(0);
    calculator.print();
    calculator.Clear();
    calculator.print();
    
    return 0;
}