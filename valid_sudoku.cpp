#include <iostream>
#include <set>
#include <vector>
#include <string>

using namespace std;

int main (){


    vector<vector <string>> sudoku;
    set <int> sets;
    bool isSudoku = true;

    sudoku = {
        {"1","2",".",".","3",".",".",".","."},
        {"4",".",".","5",".",".",".",".","."},
        {".","9","8",".",".",".",".",".","3"},
        {"5",".",".",".","6",".",".",".","4"},
        {".",".",".","8",".","3",".",".","5"},
        {"7",".",".",".","2",".",".",".","6"},
        {".",".",".",".",".",".","2",".","."},
        {".",".",".","4","1","9",".",".","8"},
        {".",".",".",".","8",".",".","7","9"}
    };


    for ( int j = 0; j < 9; j++  ){

        int a = 0;
        
        if(sudoku[0][j]!=".")  a = stoi(sudoku[0][j]);

        else continue;

        if(sets.count(a))
        {
            isSudoku = false;
            continue;
        }
        sets.insert(a);
    }

    for (auto it = sets.begin(); it != sets.end(); it++){
        cout << *it << " " ;
    }

    

}