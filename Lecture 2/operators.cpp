#include <iostream>
using namespace std;

int main () {

    // Arithmetic Operator  
    cout << "------ARITHMETIC OPERATOR--------" << endl;

    int a = 10, b = 5;
    int sum = a + b;
    cout << "sum = " << sum << endl;
    cout << "difference = " << (a-b) << endl;
    cout << "product = " << (a*b) << endl;
    cout << "division = " << (a/b) << endl;
    cout << "modulo = " << (a%b) << endl;
    
    cout << "int int division = " << (5 / 2) << endl; // integer division
    cout << "float int division = " << (5.0 / 2) << endl; // floating-point division
    cout << "float float division = " << (5.0 / 2.0) << endl; // floating-point division
    cout << "int double division = "  << (5 / (double)2) << endl;


    //Relational Operator
    cout << "------RELATIONAL OPERATOR--------" << endl;

    cout << (3 < 5) << endl; // true -> 1
    cout << (3 > 5) << endl; // false -> 0

    // Logical Operator  
    cout << "------LOGICAL OPERATOR--------" << endl;

    cout << !(3 > 1) << endl;

    return 0;
}