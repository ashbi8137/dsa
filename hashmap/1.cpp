#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    string temp = s1 + s1;
    if(s1.size() != s2.size()){
        cout << "No";
        return 0;
    }
    if(temp.find(s2)!= string::npos){
    cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}