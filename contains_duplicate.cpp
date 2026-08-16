#include <iostream>
#include <unordered_set>

using namespace std;



int main(){
    const short input = 4;
    int nums[input];

    unordered_set<int> seen;

    bool duplicate = false;

    for (int i = 0; i < input; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < input; i++) {
        if (seen.count(nums[i])) {
            cout << "Duplicate found";
            return 0;
        }

        seen.insert(nums[i]);
    }

    cout << "No duplicate";
    return 0;



    
}