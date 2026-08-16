#include <iostream>
#include <string>

using namespace std;

int main(){

    string s, t{};
    cin >> s >> t;

    for(int i=0; i<s.length();){

        bool matched = false;

        for(int j=0; j<t.length(); j++ ){
            if(s[i]==t[j]){
                s = s.erase(i, 1);
                t = t.erase(j,1);
                matched = true;
                break;
            }
        }
        if(matched==false)i++;
    }

        if (s.empty() && t.empty()) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}