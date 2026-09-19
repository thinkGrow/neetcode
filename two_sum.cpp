#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){

    int target{};
    vector <int> nums(4);
    unordered_map<int, int> seen;

    for (int i=0; i<4; i++){
        cin >> nums[i];
    }

    cin >> target;

    for(int i=0; i<4; i++){
        int needed = target - nums[i];

        if(seen.count(needed)){
            cout << seen[needed] << " " << i << endl;
            return 0; 
        }

        seen[nums[i]]=i;
    }



    return 0;
}