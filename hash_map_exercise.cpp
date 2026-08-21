#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

    // Store three students’ marks:
    // "Rubait" → 90
    // "Maryam" → 85
    // "John" → 70

    // unordered_map<string, int> student_marks;

    // student_marks["Rubait"] = 90;
    // student_marks["Maryam"] = 85;
    // student_marks["John"] = 70;

    // cout << student_marks["Rubait"] << endl;

    // ................................................................................

    // count the letters in --> "banana"

    // string str = "banana";
    // unordered_map<char, int> count_letters;

    // for(int i=0; i<str.length(); i++){
    //     count_letters[str[i]]++;
    // }

    // for (auto it = count_letters.begin(); it != count_letters.end(); it++)
    // {
    //     cout << it->first << " -> " << it->second << endl;
    // }


    // ................................................................................

    // count the frequency of the numbers in -> 1 2 1 3 2 1

    // int numbers[] = {1, 2, 1, 3, 2, 1};

    // unordered_map<int, int> count;

    // int length = sizeof(numbers) / sizeof(numbers[0]);

    // for(int i = 0 ; i < length; i++){
    //     count[numbers[i]]++;
    // }

    // for(auto it = count.begin(); it != count.end(); it++){
    //     cout << it-> first << ": " << it -> second << endl;
    // }

    // ................................................................................

    //is analgram

    string s, t{};

    s = "rubait";
    t = "tiabut";

    if(s.length()!=t.length()){
        cout << "NO";
    }

    unordered_map<char, int>count;

    for(int i=0; i<s.length(); i++){
        count[s[i]] = count[s[i]] + 1;
    }

    for(int i=0; i<t.length(); i++){
        count[t[i]] = count[t[i]] - 1;
    }

    for(auto it = count.begin(); it!=count.end(); it++){
        // cout << it->first << " : " << it->second << endl;
        if(it->second!=0){
            cout << "NO";
            return 0;
        }
    }


    cout << "YES";

    return 0;





}