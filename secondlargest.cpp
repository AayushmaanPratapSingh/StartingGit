//check for the second largest element in the array T.C.=O(n)+O(n)=O(n) , S.C=O(1) , problem is due to a=0 in negative numbers there will be issues.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k=arr[0];
//     for(int i=1;i<n;i++){
//         if(k<arr[i]){
//             k=arr[i];
//         }
//     }
//     int a=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]<k && arr[i]>a){
//             a=arr[i];
//         }
//     }
//     cout<<"The second largest element in the array is: "<<a<<endl;
//     return 0;
// }



//Updated version by me
#include<iostream>
#include<vector>
using namespace std;

int secondLargest(vector<int>& arr){
    int a = arr.size();

    int j = arr[0];       // largest
    int temp = arr[0];    // second largest initially

    for(int i = 1; i < a; i++){

        // New largest found
        if(arr[i] > j){
            temp = j;
            j = arr[i];
        }

        // New second largest found
        if(arr[i] > temp && arr[i] < j){
            temp = arr[i];
        }
    }

    return temp;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int r = secondLargest(arr);
    cout << r << endl;

    return 0;
}