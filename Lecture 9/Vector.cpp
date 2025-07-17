#include <iostream>
#include <vector>
using namespace std;


int main(){
    // vector<int> vec;

    // vector<int> vec = {1, 2, 3};
    // cout << vec[0] << endl;
    
    
    // vector<int> vec (3, 0);
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;


    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    // cout << "size = " << vec.size() << endl; 

    // for(char i : vec){  // for each loop
    //     cout << i << endl;
    // }



    vector<int> vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55); 

    cout << "after push back size = " << vec.size() << endl;

    

    for(int val : vec){  // for each loop
        cout << val << endl;
    }

    cout <<"--------"<< endl;

    // vec.pop_back(); //55
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(1) << endl;

    cout << "---------vector size and capacity---------" << endl;
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    

    return 0;
}