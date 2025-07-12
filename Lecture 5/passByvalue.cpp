#include <iostream>
using namespace std;

void changeX(int x) {
  x = 2*x;
  cout << "x = " << x << endl;
}

int sumOfDigits(int num){
    int digSum = 0;

    while (num > 0)
    {
        int lastDig = num % 10;
        num /= 10;

        digSum += lastDig;
    }
    
    return digSum;
}

int factorial(int n) {
    int fact = 1;
    for(int i =1; i<=n; i++){
        fact *= i;
    }

    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r * fact_nmr);
}

int main(){
    int x = 5;
    changeX(x);
    cout << "x = " << x << endl;

    // Qs: Calculate sum of digits of a number;
    cout << "sum = " << sumOfDigits(2356) << endl;

    // Qs: Calculate nCr binomial coefficient for n & r
    int n = 8, r = 2;

    cout << nCr(n,r) << endl;



    return 0;
}