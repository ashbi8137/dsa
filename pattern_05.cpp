// 12345
// 1234
// 123
// 12
// 1

#include <iostream>
using namespace std;

void print(int i) {
    for (int j = 1; j <=i; j++) {
        cout << j;
    }
    cout << endl;
}

int main() {
    int i,n;
    cout << "Enter a number: ";
    cin >> n;

    // Upper triangle
    for ( i = n; i >=1; i--) {
        print(i);
    }

    return 0;
}
