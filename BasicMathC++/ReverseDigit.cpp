#include <bits/stdc++.h>
using namespace std;
void reverseDigit(int N){
    int revNum = 0;
    while (N>0)
    {
        int ld = N%10;
        revNum = (revNum * 10) + ld;
        N=N/10;

    }
    cout << revNum;
    
}
int main(){
    int N;
    cin >> N;
    reverseDigit(N);
    return 0;
}