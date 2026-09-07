//remove elements all occurences in place and give new arr size T.C.=O(n) and extra space =O(1)
#include<iostream>
#include<vector>
using namespace std;
int eliminatenum(vector<int>& arr,int tar){
    int j=0;
    int o=arr.size();
    for(int i=0;i<o;i++){
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