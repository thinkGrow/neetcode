#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main (){

    vector <int> nums = {1,2,3,4,5,6,6};
    unordered_set <int> seen;

    for (int i = 0; i < nums.size(); i++){

        if( seen.count(nums[i]) ){
            cout << "Duplication baby";
            return 0;
        }

        seen.insert(nums[i]);

    }

    cout << "No duplication homie!";





}