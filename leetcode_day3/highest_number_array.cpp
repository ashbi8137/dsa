#include <iostream>
using namespace std;

int main() {
    int n,i;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[100];
    cout << "Enter the elements: ";
    for ( i = 0; i < n; i++) cin >> a[i];

    cout << "The array is: ";
    for ( i = 0; i < n; i++) cout << a[i] << endl;

    int max = a[0];
    for( i= 1 ; i<n ; i++){
        if(a[i] > max ){
            max = a[i];
        }
    }
    cout << "large value is : " << max ;
}
