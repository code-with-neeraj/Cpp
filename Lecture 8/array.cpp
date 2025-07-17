#include <iostream>
using namespace std;

int main () {
    // int marks[5] = {55,76,454,54,45};
    // int size = 5;

    // cout << marks[3] << endl;

    // //loops : 0 to size-1
    // for (int i=0; i<size; i++)
    // {
    //    cout << marks[i] << endl;
    // }


   
    int size = 5;
    int marks[size];

    //loops : 0 to size-1
    for (int i=0; i<size; i++)
    {
       cin >> marks[i];
    }

    for (int i=0; i<size; i++)
    {
       cout << marks[i] << endl;
    }
    

    
    return 0;
}