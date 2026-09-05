//check for the second largest element in the array T.C.=O(n)+O(n)=O(n) , S.C=O(1) , problem is due to a=0 in negative numbers there will be issues.
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
        if(k<arr[i]){
            k=arr[i];
        }
    }
    int a=0;
    for(int i=0;i<n;i++){
        if(arr[i]<k && arr[i]>a){
            a=arr[i];
        }
    }
    cout<<"The second largest element in the array is: "<<a<<endl;
    return 0;
}