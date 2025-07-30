#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    cout << *arr << endl; //1
    cout << *(arr +1) << endl; //2
    cout << *(arr +2) << endl; //3
    cout << *(arr +3) << endl; //4

    cout << "--------" << endl;

    int* ptr2; //100
    int* ptr1 = ptr2 + 2; //100

    cout << ptr1 - ptr2 << endl;//2

    return 0;
}