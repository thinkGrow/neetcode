#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> nums = {10, 20, 30};

    unordered_map <int, int> seen;

    for (int i = 0 ; i < nums.size(); i++){
        seen[nums[i]] = i;
    }

    cout << seen[20];


}