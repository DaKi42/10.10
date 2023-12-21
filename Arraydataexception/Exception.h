#pragma once
#include <string>
using namespace std;
class Exception
{
protected:
    string message;
public:
    Exception(string m);
    virtual string GetMessage(); 
};