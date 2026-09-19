#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){

   vector<int> nums = {2, 3, 2, 5, 3, 2};
   unordered_map<int, int> frequency;


   for (int i = 0; i < nums.size(); i++){
      frequency[nums[i]]++;
   }

   for (auto it = frequency.begin(); it != frequency.end(); it++){
      cout << it->first << " : " << it->second << endl;
   }





}