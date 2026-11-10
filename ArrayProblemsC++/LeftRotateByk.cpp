#include<bits/stdc++.h>
using namespace std;
void LeftRotate(vector<int> &arr, int k){
    int n = arr.size();
    if(n==0) return;
    k = k%n;
    for (int r = 0; r < k; r++){
        int temp = arr[0];
        for (int i = 1; i < n; i++){
            arr[i - 1] = arr[i];

        }
        arr[n - 1] = temp;
    }
    for( int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int n, k;
    cin >> n;
    cin>>k;
    vector <int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    LeftRotate(arr,k);
    
}    
