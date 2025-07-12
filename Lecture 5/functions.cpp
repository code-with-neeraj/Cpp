#include <iostream>
using namespace std;

int factorialN(int n) {
    int fact = 1;
    for(int i =1; i<=n; i++){
        fact *= i;
    }

    return fact;
}

int main(){
    // Qs: Calculate N factorial 

    cout << factorialN(4) << endl;
    return 0;
}