#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int> arr(10);
    int position;
    cin>>position;
    int value;
    cin>>value;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = n; i > position; i--){
       arr[i]=arr[i-1];
    }   

    arr[position]=value;
    n++;

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}