#include<bits/stdc++.h>
using namespace std;
void LeftRotate(vector<int> &arr, int k){
    int n = arr.size();
    if(n==0) return;
    //to avoid unwanted rotation
    k = k % n;
    //Rotate array using reverse
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k , arr.end());
    reverse(arr.begin(), arr.end());

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    
    int n,k; //input for array size and k
    cin>>n;
    cin>>k;
    vector<int> arr(n); // initializing vector
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    LeftRotate(arr,k);
    return 0;
}