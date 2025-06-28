#include <iostream>
using namespace std;

int main() {
	cout << "Today is my first day of learing of c++" << "\n";


    // this is primitive data type

    int age= 20;
    cout << "My age is " << age << endl ;
    cout << sizeof(age) << endl;

    char grage = 'A';
    cout << "My grade is " << grage << endl;
    cout << sizeof(grage) << endl;

    float PI = 3.14f;
    cout << "Value of PI is " << PI << endl;
    cout << sizeof(PI) << endl;

    bool isRaining = false;     //true -> 1, false -> 0
    cout << "Is it raining? " << isRaining << endl;
    cout << sizeof(isRaining) << endl;

    double price1 = 100.99;
    cout << "Price is " << price1 << endl;
    cout << sizeof(price1) << endl;

    // this is non-primitive data type
    string name = "Neeraj kumar";
    cout << "My name is " << name << endl;
    cout << sizeof(name) << endl;

    // type casting
    double price = 100.99;
    int newPrice = (int)price;
    cout << newPrice << endl;


   


	return 0;
}