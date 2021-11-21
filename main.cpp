/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Vuolo
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    // init variables
    int operand1, operand2;
    double result;
    char operation;
    string strOperand1, strOperand2;

    // read operands and operator from user
    cout << "Enter two operands and an operator: ";
    cin >> strOperand1 >> strOperand2 >> operation;

    // convert word to number
    if (strOperand1.compare("zero") == 0)
        operand1 = 0;
    else if (strOperand1.compare("one") == 0)
        operand1 = 1;
    else if (strOperand1.compare("two") == 0)
        operand1 = 2;
    else if (strOperand1.compare("three") == 0)
        operand1 = 3;
    else if (strOperand1.compare("four") == 0)
        operand1 = 4;
    else if (strOperand1.compare("five") == 0)
        operand1 = 5;
    else if (strOperand1.compare("six") == 0)
        operand1 = 6;
    else if (strOperand1.compare("seven") == 0)
        operand1 = 7;
    else if (strOperand1.compare("eight") == 0)
        operand1 = 8;
    else if (strOperand1.compare("nine") == 0)
        operand1 = 9;
    else
        operand1 = stoi(strOperand1);

    if (strOperand2.compare("zero") == 0)
        operand2 = 0;
    else if (strOperand2.compare("one") == 0)
        operand2 = 1;
    else if (strOperand2.compare("two") == 0)
        operand2 = 2;
    else if (strOperand2.compare("three") == 0)
        operand2 = 3;
    else if (strOperand2.compare("four") == 0)
        operand2 = 4;
    else if (strOperand2.compare("five") == 0)
        operand2 = 5;
    else if (strOperand2.compare("six") == 0)
        operand2 = 6;
    else if (strOperand2.compare("seven") == 0)
        operand2 = 7;
    else if (strOperand2.compare("eight") == 0)
        operand2 = 8;
    else if (strOperand2.compare("nine") == 0)
        operand2 = 9;
    else
        operand2 = stoi(strOperand2);

    // calculate & display result based on operation
    if (operation == '+') {
        result = (double)operand1 + (double)operand2;
        cout << "The sum of " << operand1 << " and " << operand2 << " is " << result << ".";
    }
    else if (operation == '-') {
        result = (double)operand1 - (double)operand2;
        cout << "The difference of " << operand1 << " and " << operand2 << " is " << result << ".";
    }
    else if (operation == '*') {
        result = (double)operand1 * (double)operand2;
        cout << "The product of " << operand1 << " and " << operand2 << " is " << result << ".";
    }
    else if (operation == '/') {
        result = (double)operand1 / (double)operand2;
        cout << "The quotient of " << operand1 << " and " << operand2 << " is " << result << ".";
    }

    return 0;
}