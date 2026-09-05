//check if the array is sorted 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"The array is not sorted"<<endl;
            break;
        }
        //from here till 22 line things are unnecessary and that's i could have used function to simplify the code.
        else if(i==n-2){
            cout<<"The array is sorted"<<endl;
            break;
        }
        else{
            continue;
        }   
    }
    return 0;
}
