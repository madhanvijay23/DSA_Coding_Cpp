// Extract Digits from the given numbers//
#include <bits/stdc++.h>
using namespace std;
void Extract(int n){
    if( n==0){
        return;
    }
    Extract(n/10);
    cout<<n%10<<endl;   

}
int main(){
    int n;
    cin>>n;
    Extract(n);
    return 0;
}