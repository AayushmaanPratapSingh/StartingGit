//Given an array containing numbers from 1 to n-1, with exactly one number repeated, find the repeated number.
#include<iostream>
#include<vector>
using namespace std;
int duplicate(vector<int>& arr){
    int a=arr.size();
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int r=duplicate(arr);
    cout<<"The duplicate element is: "<<r<<endl;
    return 0;
}