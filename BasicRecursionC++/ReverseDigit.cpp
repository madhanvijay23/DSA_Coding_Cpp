//Reverse the digit using recursion//
#include<bits/stdc++.h>
using namespace std;
int reverse(int n, int rev ){
    if(n==0) return rev;
    int digit = n%10;
    return reverse(n/10,rev*10+digit);

}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n,0);

}