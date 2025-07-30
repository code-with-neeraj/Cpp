#include <iostream>
#include <vector>
using namespace std;

int main(){

    int a = 10;
    int* ptr = &a;

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl; // +4

    cout << "-----------------" << endl;
    cout << ptr << endl;
    ptr = ptr +2; //2int  => 8B 
    cout << ptr << endl; // +8


    return 0;
}