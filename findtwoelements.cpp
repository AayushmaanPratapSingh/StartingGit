//find two elements in the array whose sum is equal to the given target 
#include<iostream>
using namespace std;
int main(){
    int n,tar;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>tar;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]+arr[i]==tar){
                cout<<arr[i]<<" and "<<arr[j]<<endl;
            }
        }
    }
}