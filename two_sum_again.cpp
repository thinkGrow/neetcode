#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
       unordered_map <int, int> seen;

       for ( int i = 0; i < nums.size(); i++){
            seen[nums[i]] = i;
       }

       for ( auto it = seen.begin(); it != seen.end(); it++){

            int difference = target - it->first;


            if(seen.count(difference)){
                cout << it->second << " " << seen[difference];
                return {it->second, seen[difference]};
            }

       }

       return {};



        
    }
};

int main() {
    Solution solution;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = solution.twoSum(nums, target);
    
    return 0;
}