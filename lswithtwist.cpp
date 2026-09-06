//Linear search with a twist find target first position and last position T.C.=O(n)+O(n),Extra Space=O(1)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tar;
    cin>>tar;
    int i=0;
    while(i<n){
        if(arr[i]==tar){
            cout<<"First index Position: "<<i<<endl;
            break;
        }
        i++;
    }
    if(i==n){
        cout<<"The target was not found"<<endl;
    }
    int j=n-1;
    while(j>=0){
        if(arr[j]==tar){
            cout<<"Last index Position: "<<j<<endl;
            break;
        }
        j--;
    }
    return 0;
}