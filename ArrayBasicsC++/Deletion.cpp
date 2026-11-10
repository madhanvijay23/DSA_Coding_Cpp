#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int target;
    cin>>target;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = target; i < n-1; i++){
        arr[i]  = arr[i+1];
    }
    n--;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}