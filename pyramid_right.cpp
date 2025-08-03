// 12345
// 1234
// 123
// 12
// 1

#include <iostream>
using namespace std;

int main() {
    int i,j,n;
    cout << "enter a number: ";
    cin >> n ;
    for ( i = 1; i <= 2*n-1; i++) { 
        int star = i;
        if(i>n) star=2*n-i;
        for ( j = 1; j <= star ; j++) { 
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}