//vector_unknownsize.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;   // start with empty vector
    int x;

    cout << "Enter numbers (type -1 to stop): ";

    while (true) {
        cin >> x;
        if (x == -1)  // stop condition
            break;
        v.push_back(x); // add each number to vector
    }

    cout << "\nYou entered: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
