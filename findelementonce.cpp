//find element appearing only once in the array
#include<iostream>
#include<vector>
using namespace std; 
int findelement(vector<int>& arr){
    int a=arr.size(); 
    for(int i=0;i<a;i++){ 
        int count=0;
        for(int j=0;j<a;j++){ 
            if(arr[i]==arr[j]){
                 count++; 
            }
        } 
        if(count==1){ 
            return arr[i]; 
        } 
    }
    return -1; 
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
        } 
    int r=findelement(arr); 
    cout<<"The element appearing only once in the array is: "<<r<<endl;
    return 0;
}