#include <iostream>

using namespace std;

int main(){

    string s,t;
     
    s = "rubait";
    t = "tiabur";

    int frequency[26] = {};

    for(int i=0; i<s.length(); i++){
        frequency[s[i] - 'a']++;
        frequency[t[i] - 'a']--;
    }

    for(int i=0; i<26; i++){
        if(frequency[i]!=0){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;


}