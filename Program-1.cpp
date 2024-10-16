#include <iostream>
#include <string>
using namespace std;

class Calculator {
public:
    // Method to perform the calculation As per mentioned in the Question
    double calculate(double a, double b, string operation) {
        if (operation == "addition") {
            return a + b;
        } else if (operation == "subtraction") {
            return a - b;
        } else if (operation == "multiplication") {
            return a * b;
        } else if (operation == "division") {
            if (b != 0) {
                return a / b;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
        } else {
            cout << "Invalid operation!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    double a, b;
    string operation;

    
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;
    cout << "Enter the type of operation (addition, subtraction, multiplication, division): ";
    cin >> operation;

    double result = calc.calculate(a, b, operation);
    cout << "The result is: " << result << endl;

    return 0;
}
