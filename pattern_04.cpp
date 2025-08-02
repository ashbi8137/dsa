// 1
// 22
// 333
// 4444
// 55555

#include <iostream>
using namespace std;

void print(int i) {
    for (int j = 1; j <=i; j++) {
        cout << i;
    }
    cout << endl;
}

int main() {
    int i,n;
    cout << "Enter a number: ";
    cin >> n;

    // Upper triangle
    for ( i = 1; i <= n; i++) {
        print(i);
    }

    return 0;
}
