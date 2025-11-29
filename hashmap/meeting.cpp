#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>start(n),finish(n);
    vector<pair<int,int>>meet(n);
    for(int i=0; i<n; i++){
        cin >> start[i];
        cin >> finish[i];
        meet[i] = { finish[i],start[i] };
    }
    sort(meet.begin(),meet.end());
    int last_end = meet[0].first;
    int count = 1;
    for(int i=1; i<n; i++){
        int str = meet[i].second;
        int end = meet[i].first;
        if(str > last_end){
            count++;
            last_end = end; 
        }
    }
    cout << count;
    return 0 ;
}