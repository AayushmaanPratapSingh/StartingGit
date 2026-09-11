//Given an array of stock prices, find the maximum profit you can make by buying once and selling once.
#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& arr){
    int a=arr.size();
    int b=arr[0];
    int c=0;
    for(int i=1;i<a;i++){
        if(arr[i]<b){
            b=arr[i];
        }
        if(arr[i] - b > c){
            c = arr[i] - b;
        }
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int r=maxProfit(arr);
    cout<<"Max profit: "<<r<<endl;
    return 0;
}