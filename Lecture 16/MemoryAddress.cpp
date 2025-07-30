#include <iostream>
#include <vector>
using namespace std;

int main() {
    // int a = 10;
    // int* ptr = &a;

    // cout << &a << endl;
    // cout << ptr << endl;

    // cout << &ptr << endl;

    cout << "----------------------- "<< endl;

    int a = 10;
    int* ptr = &a;
    int** parPtr = &ptr;

    cout << &ptr << endl;
    cout << parPtr << endl;
    
    cout << *(&a) << endl;
    cout << *(ptr) << endl;




    return 0;
}