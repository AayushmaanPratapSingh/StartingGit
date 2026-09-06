//remove elements all occurences and give new arr size
#include<iostream>
#include<vector>
using namespace std;
int eliminatenum(vector<int>& arr,int tar){
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=tar){
            arr[j]=arr[i];
            j++;
        }
    }
    return j;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int r=eliminatenum(arr,target);
    cout<<"The updated size of the array is: "<<r<<endl;
    return 0;
}