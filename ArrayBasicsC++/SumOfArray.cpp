#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        
        cin >> arr[i];

    }
    for (int i = 0; i<n; i++){
        sum = sum + arr[i];
    }
    cout<<"Sum of the array : " << sum;
    return 0;
}