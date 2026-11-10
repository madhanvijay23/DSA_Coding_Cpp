#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++){
        b[i] = arr[i];
    }
    for (int x:b){
        cout << x <<" ";
    }
    return 0;
}