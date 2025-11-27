#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, e;
    cin >> n;
    cin >> e;

    vector<int> pwr(n);
    vector<int> bns(n);
    vector<int> visited(n, 0); // NEW: to track defeated monsters

    for(int i = 0; i < n; i++){
        cin >> pwr[i];
    }
    for(int i = 0; i < n; i++){
        cin >> bns[i];
    }

    int count = 0;
    bool progress = true; // NEW

    // NEW LOOP WRAPPER
    while(progress) {
        progress = false;
        for(int i = 0; i < n; i++){
            if(!visited[i] && e >= pwr[i]){ // check only unvisited
                visited[i] = 1;            // mark this monster defeated
                count++;                   // increment count
                e += bns[i];               // gain bonus
                progress = true;           // we progressed, so recheck all
            }
        }
    }

    cout << count;
    return 0;
}
