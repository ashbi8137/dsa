// 3
// 32
// 321

#include <iostream>
using namespace std;


int main() {
    for (int i = 3; i>=1 ; i--) {
        for (int j = 3; j >=i; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
