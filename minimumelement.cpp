//smallest element in the array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=arr[0];
    for(int i=1;i<n;i++){
        if(k>arr[i]){
            k=arr[i];
        }
    }
    cout<<"The smallest element in the array is: "<<k<<endl;
    return 0;
}