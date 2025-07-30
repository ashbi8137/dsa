#include <iostream>
using namespace std;

void print(int i) {
    for (int j = 0; j < i; j++) {
        cout << "* ";
    }
    cout << endl;
}

int main() {
    int i,n;
    cout << "Enter a number: ";
    cin >> n;

    // Upper triangle
    for ( i = 0; i < n; i++) {
        print(i);
    }

    // Lower triangle
    for ( i = n; i > 0; i--) {
        print(i);
    }

    return 0;
}
