#include<iostream>
using namespace std;
class DataPerson
{
    private:
        int _age;
       static int _counter;
    public:
        DataPerson()
        {
         _counter++; 
        }
        void print(int age)
        {
            _age=age;
            cout << _age << endl;
            cout << _counter<<endl;
        }
};
int DataPerson::_counter=0;
int main (){
    DataPerson n,i;
    n.print(20);
    
    return 0;
}