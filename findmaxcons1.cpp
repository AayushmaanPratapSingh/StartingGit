//Given a binary array containing only 0 and 1, find the maximum number of consecutive 1s.
#include<iostream>
#include<vector>
using namespace std;
int consecutive(vector<int>& arr){
    int a=arr.size();
    int count =0;
    int count1=0;
    for(int i=0;i<a;i++){
        if(arr[i]==1){
        count++;
        }
        else{
            if(count1<count){
            count1=count;
            }
            count=0;
        }
    }
    if(count1<count){
        count1=count;
    }
    return count1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int r=consecutive(arr);
    cout<<"The maximum number of times consecutive 1 comes is: "<<r<<endl;
    return 0;
}