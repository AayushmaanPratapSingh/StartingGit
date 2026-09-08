//find the majority element which appears more than n/2 times in the array 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool visited[n]={false};
    for(int i=0;i<n;i++){
        int count=1;
        if (visited[i]==true){
        continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                visited[j]=true;
            }
        }
        if(count>n/2){
            cout<<"The element is : "<<arr[i]<<" appearing "<<count<<" times.";
        }
    }
}