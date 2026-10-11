#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){

    vector <int> nums = {1,2,2,3,3,3,3};
    int k = 2;
    int count = 0;

    unordered_map <int, int> maps;

    for ( int num : nums){
        maps[num]++;
    }

    vector <vector<int> > bucket(nums.size()+1);

    for ( auto it = maps.begin(); it != maps.end(); it++ ) {
        bucket[it->second].push_back(it->first);
    }

    for (int i = bucket.size() - 1; i >= 0 ; i--){
        for ( int j = 0 ; j < bucket[i].size(); j++){
            cout << bucket[i][j] << " ";
            count++;

            if(count==k)break;
        }
        if(count==k)break;
    }









}