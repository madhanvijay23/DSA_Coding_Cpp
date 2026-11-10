#include <bits/stdc++.h>
using namespace std;
void allDivisor(int N){
    vector<int> ls;
    for (int i = 1; i*i<=N; i++){
        if(N%i==0){
            ls.push_back(i);
        }
        if((N/i)!=i){
            ls.push_back(N/i);
        }

    }
    sort(ls.begin(),ls.end());
    for(int x: ls){
        cout<<x<<" ";
    }
    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    for(int i=1 ; i<=t; i++){
        int N;
        cin>>N;
        allDivisor(N);
    }
}