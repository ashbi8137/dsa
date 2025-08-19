// Task: Write a function that merges two strings, but only takes the first character of each.
// Example:
// Input: "abc", "pqr"
// Output: "ap"

#include<iostream>
#include<string>
using namespace std;
int main(){
 string str1 = "abc";
 string str2 = "pqr";
 string res ;
 res = string(1 , str1[0]) +  string(1 , str2[0]);
 cout << "output is : " << res ;

}

//learned lesson :
//Conversion of char to string using string( numebroftimes, char)