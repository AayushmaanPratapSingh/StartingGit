//Reverse an array T.C.=O(n),S.C.=O(n) due to new array containing n elements
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int arr1[n];
//     int j=0;
//     for(int i=4;i>=0;i--){
//         arr1[j]=arr[i];
//         j++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr1[i]<<" ";
//     }
//     return 0;
// }

// Adavanced approach with space O(1) rather than O(n) and T.C.=O(n)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}