#include<iostream>
#include<vector>
using namespace std;
class Machine
{
    string _MachineName="";
    string _MachineType="";
    int _MachineNumber=0;
    bool _isWorking=true;

    enum df{Working=true,NotWorking=false};
    public:
    Machine(string MachineName,string MachineType,int MachineNumber,bool isWorking)
    {
      this->  _MachineName=MachineName;
        _MachineType=MachineType;
        _MachineNumber=MachineNumber;
        _isWorking=isWorking;
    }
    void setMachineName(string MachineName)
    {
        _MachineName=MachineName;
    }
    void setMachineType(string MachineType)
    {
        _MachineType=MachineType;
    }
    void setMachineNumber(int MachineNumber)
    {
        _MachineNumber=MachineNumber;
    }
    void setIsWorking(bool isWorking)
    {
        _isWorking=isWorking;
    }
    string getMachineName()
    {
        return this->_MachineName;
    }
    string getMachineType()
    {
        return _MachineType;
    }
    int getMachineNumber()
    {
        return _MachineNumber;
    }
    bool getIsWorking()
    {
        return _isWorking;
    }

    void display()
    {
        cout <<"-----------------------"<<endl;
        cout <<"Machine Details"<<_MachineNumber<<endl;
        cout<<"Machine Name: "<<_MachineName<<endl;
        cout<<"Machine Type: "<<_MachineType<<endl;
        cout<<"Machine Is Working: "<<(df)_isWorking<<endl;
        cout<<"-----------------------"<<endl;
    }
 
};
int main()
{
    vector<Machine> machines; //vector of machines
   machines.push_back(Machine("Machine 1","Machine 1 Type",1,true)); //temporary object
   machines.push_back(Machine("Machine 2","Machine 2 Type",2,true));//temporary object
   machines.emplace_back("Machine 3","Machine 3 Type",3,false);//not temporary object
    for(auto m:machines)
    {
        m.display();
    }
    
    return 0;
}