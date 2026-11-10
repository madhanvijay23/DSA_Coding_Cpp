#include <bits/stdc++.h>
using namespace std;
void countDigit(int N){
    int count = int(log10(N)+1);
    cout<<count;
}
int main(){
    int N;
    cin >> N;
    countDigit(N);
    return 0;
}