//count frequency of every element
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
        if(visited[i]){
            continue;
        }
        int j=0;
        for(int k=0;k<n;k++){
            if(arr[k]==arr[i]){
                j++;
                visited[k]=true;
            }    
        }
        cout<<"The frequency of the number "<<arr[i]<<" is: "<<j<<endl;
    }
    return 0;
}