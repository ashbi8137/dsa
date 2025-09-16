// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void function(int &n, int a[]){
    int pos;
    cout << "Enter the position you want to delete: ";
    cin>> pos;
    // a[pos] = null;
    //I need to remove this
    for(int i=pos; i<n;i++){
        a[i-1]=a[i];
    }
    n--;
    cout << "updated list is : ";
    for(int i=0; i<n; i++){
        cout << a[i];
    }
}

int main() {
    int n;
    cout << "enter the numbe of elements :";
    cin >> n;
    int a[100];
    cout<< "enter the elements :";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << "the elements are here:";
    for(int i=0; i<n; i++){
        cout << a[i];
    }
    
    function(n,a);

    return 0;
}