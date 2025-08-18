/*
Create a vector<vector<int>> to represent:

1 2 3
4 5 6
7 8 9


and print it in matrix form.

Expected Output:

1 2 3
4 5 6
7 8 9
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> mat ={ {1,2,3},{4,5,6},{7,8,9}};
    for(auto i : mat){
        for(auto j : i){
             cout << j << " ";
        }
        cout << endl ;
    }
   
}