#include<iostream>
#include<string>
using namespace std;

int main(){
 string word1 = "abcd";
 string word2 = "pq";
 string res ;
 
int large = max(word1.size() , word2.size());

 for(int i = 0 ; i < large ; i++){
    if(i<word1.size()) res += word1[i];
    if(i<word2.size()) res += word2[i];
 }

 cout << "output is : " << res ;
}