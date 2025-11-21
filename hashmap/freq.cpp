#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++){
        mp[a[i]]++;
    }
    if(n == 0){
        cout << "No elements provided" << endl;
        return 0;
    }

    int maxFreq = 0;
    int element = -1;
    // Choose the smallest element in case of ties for frequency
    for(const auto &it : mp){
        if(it.second > maxFreq ){
            maxFreq = it.second;
            element = it.first;
        }
    }
    cout << "Element with max frequency: " << element << endl;
    cout << "Frequency: " << maxFreq << endl;
    return 0;
}

