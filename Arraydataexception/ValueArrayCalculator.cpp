#include <iostream>
#include "ArraySizeexception.h"
#include "ArrayDataexception.h"
#include "ValueArrayCalculator.h"
using namespace std;

ValueArrayCalculator::ValueArrayCalculator(int r, int c) : rows(r), cols(c)
{
}

int ValueArrayCalculator::Calc(string** array)
{
    int sum = 0;

    if (rows != cols) throw ArraySizeexception("Invalid array size, rows must be = cols.");

    try {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int value = 0;
                for (char n : array[i][j]) {
                    if (isdigit(n)) {
                        value = value * 10 + (n - '0');
                        sum += value;
                    }
                    else {
                        throw ArrayDataexception("Invalid data at cell |" + to_string(i) + "," + to_string(j) + "|");
                    }
                }
            }
        }
    }
    catch (ArrayDataexception exception)
    {
        cout << exception.GetMessage() << endl;
    }
    catch (ArraySizeexception exception)
    {
        cout << exception.GetMessage() << endl;
    }

    return sum;
}