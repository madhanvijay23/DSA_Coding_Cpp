#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> arr(n);
    int index = -1;
    
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++){
        if(arr[i]==target){
            index = i;
            break;
        }
    }
    cout << index;
    return 0;

}