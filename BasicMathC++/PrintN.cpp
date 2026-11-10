#include<bits/stdc++.h>
using namespace std;
void PrintN(int i, int N){
    if(i>N) return;

    PrintN(i,N);
    cout << i<<endl;
}
int main(){
    int N;
    cin>>N;
    PrintN(1,N);
}
