#include <bits/stdc++.h>
using namespace std;
void palindrome(int N){
    int dup = N;
    int revNum = 0;
    while (N>0)
    {
         int lastdigit = N%10;
         revNum = (revNum*10)+ lastdigit;
         N=N/10;
         
    }
    if (dup == revNum){
        cout<<"Palindrome";
    }
    else cout<<"Not a Palindrome";
    cout<<endl;
    
}
int main(){
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        int N;
        cin>>N;
        palindrome(N);
    }

}