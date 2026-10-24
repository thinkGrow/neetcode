#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> nums = {1,2,3,4};

    vector <int> prefix(nums.size());
    vector <int> postfix(nums.size());
    vector <int> output(nums.size());




    int product = 1;
    for ( int i = 1; i < nums.size(); i++ ){
        prefix[0] = 1;
        product = product * nums[i-1];
        prefix[i] = product;
    }

    product = 1;

    for ( int j = nums.size() - 2 ; j >= 0; j--){
        postfix[nums.size()-1]=1;

        product = product * nums[j+1];

        postfix[j] = product;

    }

    for ( int i = 0; i < nums.size(); i++ ){
        output[i] = prefix[i] * postfix[i];
    }
    for ( int i = 0; i < nums.size(); i++ ){
        cout << output[i] << " ";
    }




}