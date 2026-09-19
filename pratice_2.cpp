#include <iostream>
#include <vector>

using namespace std;

int main (){

    //check whether a key exists
    vector <int> nums = {10,20,30};
    unordered_map<int, int> map;

    for(int i=0; i<nums.size();i++){
        map[nums[i]] = i;
    }

    auto result = map.find(40);

    if (result != map.end()) {
        cout << "Index: " << result->second;
    } else {
        cout << "Key not found";
    }

    return 0;


}