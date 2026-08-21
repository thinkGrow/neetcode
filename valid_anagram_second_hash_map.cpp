#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if (s.length() != t.length()) {
        cout << "false" << endl;
        return 0;
    }


    unordered_map<char, int> count;

    for (int i = 0; i< s.length(); i++){
        count[s[i]] = count[s[i]] + 1;
    }

    for (int i = 0; i < t.length(); i++){
        count[t[i]] = count[t[i]] - 1;
    }

    for (auto it = count.begin(); it != count.end(); it++) {
        if (it->second != 0)
        {
            cout << "false" << endl;
            return 0;
        }
    }





















    

    // unordered_map<char, int> count;

    // for (int i = 0; i < s.length(); i++) {
    //     count[s[i]]++;
    // }

    // for (int i = 0; i < t.length(); i++) {
    //     count[t[i]]--;
    // }

    // for (auto it = count.begin(); it != count.end(); it++) {
    //     if (it->second != 0) {
    //         cout << "false" << endl;
    //         return 0;
    //     }
    // }

    // cout << "true" << endl;

    // return 0;
}