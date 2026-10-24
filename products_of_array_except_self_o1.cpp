#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> nums = {1,2,3,4};

    // output doubles as the prefix array, then a single running
    // variable replaces the postfix array: no extra data structures
    vector <int> output(nums.size(), 1);

    int product = 1;
    for ( int i = 1; i < nums.size(); i++ ){
        product = product * nums[i-1];
        output[i] = product;
    }

    product = 1;
    for ( int j = nums.size() - 2; j >= 0; j-- ){
        product = product * nums[j+1];
        output[j] = output[j] * product;
    }

    for ( int i = 0; i < nums.size(); i++ ){
        cout << output[i] << " ";
    }
}
