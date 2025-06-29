#include <iostream>
using namespace std;

int main () {
    // Qs: Print number 1 to 5
    // int n = 1;

    cout << "--------while loop-------" << endl;
    // while (n <= 10)
    // {
    //     cout << n << " " ;
    //     n++;
    // }
    // cout << endl;
    cout << "--------For loop------" << endl;
    // for ( n = 1 ; n <= 10; n++)
    // {
    //    cout << n << " " ;
    // }
    // cout << "\n";

    // // Qs: Sum of numbers from 1 to n.
    // int sum = 0;
    // int m = 10;
    // for (int i = 1; i<= m; i++)
    // {
    //     sum += i;
    // }
    // cout << "sum = " << sum << endl; 

    // Qs: Sum of all Odd numbers from 1 to N
    // int n = 5;
    // int oddSum = 0;

    // for(int i=1; i<=n; i++){
    //     if (i%2 != 0)
    //     {
    //         oddSum +=i;
    //     }
        
    // }
    // cout << oddSum << " " ;

    cout << "--------do while loop------" << endl;

    // do {
    //     cout << "hello world!\n";
    // } while (3 > 5);

    // int n = 10;
    // int i = 1;

    // do {
    //     cout << i << " ";
    //     i++;
    // } while (i <= n);

    // cout << endl;
    
    // Qs: check if a number is prime or not 
    // int n = 7;

    // for(int i=2; i<=n-1; i++) {
    //     if(n % i == 0){
    //         cout << "Prime num \n";
    //     } else {
    //         cout << "not prime";
    //         break;
    //     }
    // }

    cout << "--------Nested loop------" << endl;
    for(int i=1; i<=5; i++){
        int m = 10;
        for (int j=1; j<=m; j++){
            cout << "*";
        }
        cout << endl;
    }
    


    return 0;
}