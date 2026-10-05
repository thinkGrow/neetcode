#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {

    vector <string> strs = {"act","pots","tops","cat","stop","hat"};
    unordered_map<string, vector<string>> maps;


    for ( int i = 0; i < strs.size(); i++){

        char alphabets[26] = {};

        for (int j = 0; j < strs[i].length(); j++ ){
            alphabets[ strs[i][j] - 'a' ]++; 
        }

        string keys = "";

        for(int k = 0; k < 26; k++){
            keys += to_string(alphabets[k]) + ",";
        }

        maps[keys].push_back(strs[i]);

    }

    for (auto it = maps.begin(); it != maps.end(); it++){

        // cout << it->first << " : " ;

        for ( int i = 0; i < it->second.size(); i++){
            cout << it->second[i] << " ";
        }

        cout << "\n";

    }


    
}
