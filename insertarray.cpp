// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

void function(int &n,int a[]){
    int num,pos;
    cout << "\n enter the position you want to add the number: ";
    cin >> pos;
    cout << "\n enter the number to insert ";
    cin >> num;
    for(int i=n; i>=pos; i--){
        a[i]=a[i-1];
    }
    a[pos-1] = num;
    n++ ;
    
    cout << "updated list is : ";
    for(int i=0; i<n; i++){
        cout << a[i];
    }
}

int main() {
    int n,num;
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