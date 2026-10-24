#include <iostream>

using namespace std;

int main(){

    vector <int> nums = {1,2,4,6};

    vector <int> prod_list = {};



    for ( int i = 1; i <= nums.size(); i++ ){

        int product = 1;


        for ( int j = 1; j <= nums.size(); j++){

            if(j!=i){

                product = product * nums[j-1];

            }


        }
        
        prod_list.push_back(product);


    }

    for ( int i = 0; i < nums.size(); i++){

        cout << prod_list[i] << " ";
    }




}