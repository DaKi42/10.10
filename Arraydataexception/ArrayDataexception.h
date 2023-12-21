#pragma once
#include <string>
#include "Exception.h"
using namespace std;

class ArrayDataexception : public Exception
{
public:
	ArrayDataexception(string m);
}; 