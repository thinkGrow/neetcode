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

    // count the letters in --> "banana"

    string str = "banana";
    unordered_map<char, int> count_letters;

    for(int i=0; i<str.length(); i++){
        count_letters[str[i]]++;
    }

        for (auto it = count_letters.begin(); it != count_letters.end(); it++)
    {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;





}