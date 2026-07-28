#include <vector>
#include <iostream>
using namespace std;
class Solution {

bool search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size()-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]==target)return true;
        if(nums[low]==nums[mid] && nums[mid]==nums[high]){
            low++;
            high--;
            continue;
        }
        
        if(nums[low]<=nums[mid]){
            if(nums[low]<=target && nums[mid]>=target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(nums[high]>=target && nums[mid]<=target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return false;
}


int main(){
    int size;
    cin>>size;
    vector <int> arr(size);
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<endl;
    cout<<search(arr,key)<<endl;
    return 0;
}
