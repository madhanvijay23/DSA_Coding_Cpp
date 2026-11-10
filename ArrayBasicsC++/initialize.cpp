#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    for (int i = 0; i<5; i++){
        cout <<"Element at index "<<i<<":"<< arr[i]<<endl;
    }
    cout << endl;
    cout << "Element at index 2 : "<< arr[2] << endl;
    arr[2] = 100;
    cout <<"Updated Element at index 2 : "<< arr[2];

}