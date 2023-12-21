#pragma once
#include <string>
#include "Exception.h"
using namespace std;

class ArraySizeexception : public Exception
{
public:
	ArraySizeexception(string m);
}; 