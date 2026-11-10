#include<bits/stdc++.h>
using namespace std;

void MoveZero(vector<int> &arr){

    int i = 0;
    int n = arr.size();

    for (int j = 0; j < n; j++){
        if(arr[j] != 0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    MoveZero(arr);
    return 0;
}

