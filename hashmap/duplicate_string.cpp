// Remove Duplicates From a String 
// Input: "aaabbc"
// Output: "abc"

#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;
int main(){
    string s;
    getline(cin,s);
    unordered_set<char>mp;
    string result = "";

    for(auto c : s){
          if(mp.find(c) == mp.end()){
            result += c;
            mp.insert(c);
          }
    }
    cout << result;
    return 0;
}
