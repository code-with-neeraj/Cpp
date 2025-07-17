#include <iostream>
using namespace std;

int main () {
    // Qs: find smallest / largest in Array 

    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0; i<size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
        largest = max(nums[i], largest);
    }

    cout << "smallest = " << smallest << endl;
    cout << "largest = " << largest << endl;

    return 0;
}