#include <iostream>
using namespace std;

string largestStringInteger(string num) {
    string ans = "";
    //loop through the string 
    //each i have the length of 3
    
    
    for (int i = 0; i <= num.size() - 3; i++) {
        //check the 3 consecutive numbers are same
        if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
            //if yes pick the substring 
            string sub = num.substr(i, 3);
            //return the substring is there or not
            if (sub > ans) {
                ans = sub;
            }
        }
    }
    return ans;
}

int main() {
    //give a string input
    string num;
    cin >> num;
    cout << largestStringInteger(num) << endl;
    return 0;
}