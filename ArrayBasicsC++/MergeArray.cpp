#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {   cin>>b[i];
    }
    vector<int> c(n*2);
    for (int i = 0; i < n; i++)
    {
        c[i]=a[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[i+n] =b[i];
    }
    for(int x : c){
        cout<<x<<" ";
    }
    return  0;
    

}