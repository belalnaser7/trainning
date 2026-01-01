
#include <iostream>
#include <string>
using namespace std;
class countString
{
    string _str;

public:
    countString()
    {
        _str = "";
    }
    countString(string _str)
    {
        this->_str = _str;
    }
    void setString(string _str)
    {
        this->_str = _str;
    }
    
    string getString()
    {
        return _str;
    }

   static int countEachWordInNewLine(string str)
    {
        string delim = " ";
        
        short pos = 0;
        int count = 0;
        string word;
        while ((pos = str.find(delim)) != std::string::npos)
        {
            word = str.substr(0, pos);
            if (word != "")
            {
                count++;
            }
            str.erase(0, pos + delim.length());
        }
        if (str != "")
        {

            count++;
        }
        return count;
    }
   int countEachWordInNewLine() // overloading
    {
        return countEachWordInNewLine(_str);
    }
};
