#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;         // number of elements (can be unknown at first)
    vector<int> v;    // start empty

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);   // grow dynamically
    }

    cout << "Vector elements: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}