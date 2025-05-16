// Simple Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class clsCalculator
{
private:
    float _result = 0;
    float _lastNumber = 0;
    string _lastOperation = "Clear";
    float _previouResult = 0;
    bool _isZero(float number)
    {
        return (number == 0);
    }

public:
    void Add(float Number)
    {
        _lastNumber = Number;
        _previouResult = _result;
        _lastOperation = "Adding";
        _result += Number;
    }
    void Subtract(float Number)
    {
        _lastNumber = Number;
        _previouResult = _result;
        _lastOperation = "Subtracting";
        _result -= Number;
    }
    void Divide(float Number)
    {
        _lastNumber = Number;
        if (_isZero(Number))
        {
            Number = 1;
        }
        _previouResult = _result;
        _lastOperation = "Dividing";
        _result /= Number;
    }
    void Multiply(float Number)
    {
        _lastNumber = Number;
        _previouResult = _result;
        _lastOperation = "Multiplying";
        _result *= Number;
    }
    float GetFinalResult()
    {
        return _result;
    }
    void Clear()
    {
        _result = 0;
        _lastNumber = 0;
        _lastOperation = "Clear";
        _previouResult = 0;
    }
    void CancelLastOperation()
    {
        _lastNumber = 0;
        _lastOperation = "Canceling Last Operation";
        _result = _previouResult;
    }
    void PrintFinalResult()
    {
        cout << "Result After " << _lastOperation << " " << _lastNumber << " Is: " << _result << endl;
    }
};

int main()
{
    clsCalculator calculator1;
    calculator1.Add(10);
    calculator1.PrintFinalResult();
    calculator1.Multiply(12);
    calculator1.Subtract(20);
    calculator1.PrintFinalResult();
    calculator1.CancelLastOperation();
    calculator1.PrintFinalResult();
    calculator1.Clear();
    calculator1.PrintFinalResult();

    return 0;
}



