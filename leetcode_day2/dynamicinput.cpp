/*
Ask the user how many numbers they want to enter.
Store them in a vector.
Print the numbers in reverse order.

Example Run:

Input:
5
10 20 30 40 50

Output:
50 40 30 20 10
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; 
    cout << "Input:" << endl ;
    cin >> n ;
    vector<int> v(n);
    cout << "Enter the elements :" << endl ;
    for( int i =0 ; i< n ;i++){
        cin >> v[i] ;
    }
    for( int i = n -1 ; i>=0 ;i--){
        cout << v[i] << " " ;
    }
}


/*
Use push_back()

vector<int> v;
for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    v.push_back(num);
}
*/