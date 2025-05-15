#include <iostream>
#include <cmath>    // for sqrt() and pow()

using namespace std;

class Calculator {
private:
    int firstNo;
    int secondNo;

public:
    // Inline function to take input
    void Input() {
        cout << "Enter first number: ";
        cin >> firstNo;
        cout << "Enter second number: ";
        cin >> secondNo;
    }

    // Inline function to display the output
    void Output() {
        cout << "First number: " << firstNo << endl;
        cout << "Second number: " << secondNo << endl;
    }

    // Inline function to add the numbers
    inline int add() {
        return firstNo + secondNo;
    }

    // Inline function to subtract the numbers
    inline int substract() {
        return firstNo - secondNo;
    }

    // Inline function to multiply the numbers
    inline int multiply() {
        return firstNo * secondNo;
    }

    // Inline function to divide the numbers
    inline double divide() {
        if (secondNo != 0) {
            return static_cast<double>(firstNo) / secondNo;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }

    // Inline function to find the modulus of the numbers
    inline int modulus() {
        return firstNo % secondNo;
    }

    // Inline function to find power of the first number raised to the second number
    inline double power() {
        return pow(firstNo, secondNo);
    }

    // Inline function to find the square root of the second number w.r.t first number
    inline double square_root() {
        if (secondNo >= 0) {
            return sqrt(firstNo);
        } else {
            cout << "Error: Cannot find square root of a negative number!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    calc.Input();

    calc.Output();

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.substract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;
    cout << "Modulus: " << calc.modulus() << endl;
    cout << "Power: " << calc.power() << endl;
    cout << "Square Root of first number: " << calc.square_root() << endl;

    return 0;
}
