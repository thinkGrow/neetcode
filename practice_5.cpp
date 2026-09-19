#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Difficulty: Easy
// Print the first number whose frequency is exactly 1. 
// First count frequencies, then 
// scan the original vector again to preserve its order.
// nums = {4, 5, 4, 6, 5, 8}
// Output: 6

int main(){

    vector <int> nums = {4, 5, 4, 6, 5, 8};
    map <int, int> maps;

    for (int i = 0 ; i < nums.size(); i++){
        maps[nums[i]]++;
    }

    for (auto it = maps.begin(); it != maps.end(); it++){

        if(it->second == 1){
            cout << it->first << " " << it->second << endl;
            return 0;
        }
    }


}