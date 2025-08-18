/*
Create a vector of strings containing your 3 favorite fruits.
Use a for-each loop (for(string s : vec)) to print them.

Expected Output:

Mango
Banana
Apple
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> s = {"Mango", "Banan" , "Apple"};
    for(string x : s){
        cout << x << endl;
    }
}
