#include<iostream>
using namespace std;
class car
{
    int speed;
    static int engine;
    public:
    car(int speed)
    {
      this->speed=speed;
      engine++;
    }
    static void getEngine( car car1)
    {
        car1.showSpeed();
    }
    void showEngine()
    {
        getEngine(*this);
    }
    void setSpeed(int s)
    {
        speed=s;
    }
    void showSpeed()
    {
        cout<<"Speed is "<<speed<<endl;
    }
};
int car::engine=0;

int main()
{
    car c1(100);
    car c2(200);
    car c3(300);
    c1.showEngine();
    c2.showEngine();
    c3.showEngine();
    c1.showEngine();













    // int x=10,y=20,z=30;
    // int *ptr=&x;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // ptr=&y;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // ptr=&z;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    return 0;
}