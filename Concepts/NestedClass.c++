#include<iostream>
using namespace std;
class chief
{
    string name;
    string age;
   
    public:
     class assistant{
    public:
    string kname;
    assistant(string name){
        this->kname=name;
    }
    void nameAssistant(string name){
        kname=name;
        
    }
    string getName(){
        return kname;
    }
    };
    chief(string name , string age){
        this->name=name;
        this->age=age;
    }
    void setName(string name){
        this->name=name;
    }
    void setAge(string age){
        this->age=age;
    }
    string getName(){
        return name;
    }
    string getAge(){
        return age;
    }
    void display(){
        assistant a("mohamed");
        cout << "Neme of chief is " << name << endl;
        cout << "Age of chief is " << age << endl;
        cout << "Neme of assistant is " << a.kname << endl;
        
    }
};
int main(){
    chief c("Rahul","22");
    chief::assistant a("mohamed");

    c.display();
    return 0;
}