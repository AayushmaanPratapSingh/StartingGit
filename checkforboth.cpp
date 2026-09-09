//check for elements present  in both  the arrays 
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    bool visited1[n]={false};
    bool visited2[m]={false};
    for(int i=0;i<n;i++){
        if (visited1[i]==true){
            continue;
        }
        for(int j=0;j<m;j++){
            if(visited2[j]==true){
                continue;
            }
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<endl;
                visited1[i]=true;
                visited2[j]=true;
            }
        }
    }
    return 0;
}