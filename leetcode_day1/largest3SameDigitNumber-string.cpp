#include <iostream>
using namespace std;

string largestStringInteger(string num) {
    string ans = "";
    for (int i = 0; i <= num.size() - 3; i++) {
        if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
            string sub = num.substr(i, 3);
            if (sub > ans) {
                ans = sub;
            }
        }
    }
    return ans;
}

int main() {
    string num;
    cin >> num;
    cout << largestStringInteger(num) << endl;
    return 0;
}