#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int mini(vector <int> &arr){
    int low = 0 ;
    int high = (int)arr.size()-1;
    int ans = INT_MAX;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[low]<=arr[mid]){
            if(ans > arr[low]){
                ans=arr[low];
            }
            low=mid+1;
        }
        else{
            if(ans>arr[mid]){
                ans=arr[mid];
            }
            high=mid-1;
        }

    }
    return ans;
}

int main(){
    int size;
    cin>>size;
    vector <int> arr(size);
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    cout<<mini(arr)<<endl;
    return 0;
}