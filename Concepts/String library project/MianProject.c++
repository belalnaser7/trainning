#include <iostream>
#include <string>
#include "class.h"
using namespace std;
int main()
{
  countString s1("belal nasser");
 cout <<  s1.getString()<<endl;
 cout <<  "the length of the string is : " << s1.countEachWordInNewLine()<<endl;
 cout << "the length of the string is : " << s1.countEachWordInNewLine("Hello mr belal nasser i am here to help you in your project and i will be your guide in this project")<<endl;
 int count= countString::countEachWordInNewLine("Hello mr belal nasser i am here to help you in your project and i will be your guide in this project");
    return 0;
}