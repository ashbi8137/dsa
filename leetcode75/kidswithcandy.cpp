#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,a[100],extraCandies,n ;
    string result[100];    
    //array creation
    cout << " Enter the total elements of the array : " ;
    cin >> n ;
    cout << "Enter the elements of the array :" << endl ;
    for(i=0 ;i < n;i++){
        cin >> a[i];
    }
    cout << "The array is :" ;
    for(i=0 ;i < n;i++){
        cout << a[i] << " ";
    }
    cout << "\nThe extra cnady : " ;
    cin >> extraCandies ;
    //find the max_value
    int max_value = a[0];
    for(i=1;i<n;i++){
        if(a[i]> max_value){
            max_value = a[i];
        }
    }
    cout << "The max value is : " << max_value << endl ;
    //comapring logic 
    for(i=0;i<n;i++){
        if(a[i] + extraCandies >= max_value){
            result[i] =  "true" ;
        }
        else {
            result[i] = "false" ;
        }          
    }
    //return boolean array
    for(i=0;i<n;i++){
        cout << result[i] << " ";       
    } 
}
 
 
 
 