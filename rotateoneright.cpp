//Rotate an array by one position to the right well structutred T.C.=O(n),S.C.=O(1)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=arr[n-1];
    int i=n-1;
    while(i>0){
        arr[i]=arr[i-1];
        i--;
    }
    arr[0]=a;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}