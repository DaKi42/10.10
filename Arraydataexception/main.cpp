#include <iostream>
#include "Exception.h"
#include "ArraySizeexception.h"
#include "ArrayDataexception.h"
#include "ValueArrayCalculator.h"
using namespace std;

int main() {
	const int ROWS = 4;
	const int COLS = 4;

	string array[ROWS][COLS] = {
		{"2", "4", "2", "4"},
		{"1", "3", "3", "7"},
		{"6", "8", "8", "f"},
		{"2", "1", "0", "0"}
	};

	string** arrayPtr = new string * [ROWS];
	for (int i = 0; i < ROWS; i++) {
		arrayPtr[i] = array[i];
	}

	ValueArrayCalculator calculator(ROWS, COLS);

	int result = calculator.Calc(arrayPtr);
	 
	delete[] arrayPtr;

	cout << result;
}