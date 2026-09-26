#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

int main (){

    vector <string> words = {"act","pots","tops","cat","stop","hat"};

    
    unordered_map <string, vector<string> > maps;
    
    for ( int i = 0; i < words.size(); i++ ){

        int alphabets[26] = {};
        
        for ( int j = 0; j < words[i].length(); j++){

            alphabets[words[i][j] - 'a']++;        

        }

        string key {};

        for(int k = 0 ; k < 26; k++){
            key += to_string(alphabets[k]) + ',';
        }

    maps[key].push_back(words[i]);

    }

    for ( auto it = maps.begin();  it != maps.end(); it++ ){

        for ( int i = 0; i < it->second.size(); i++ ){
            cout << it->second[i] << " ";
        } 
        cout << "\n";
    }
    



    
}