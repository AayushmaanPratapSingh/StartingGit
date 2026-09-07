//find exactly one number missing in array from 0 to N T.C.=O(n square) extra space O(1)
#include<iostream>
#include<vector>
using namespace std;
int missingnum(vector<int>& arr){
    int a = arr.size();
    for(int b = 0; b <= a; b++){
        bool found = false;
        for(int j = 0; j < a; j++){
            if(arr[j] == b){
                found = true;
                break;
            }
        }
        if(found == false){
            return b;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    
    int r = missingnum(arr);
    cout << "The missing num is: " << r << endl;
    return 0;
}