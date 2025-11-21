#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
int main(){
    int count = 0;
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int target;
    cin >> target;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int x = a[i];
        int rem = target - x;
        if(mp.find(rem) != mp.end()){
            count++;
        }
        mp[x]++;
    }
    cout << count;
    return 0;
}
