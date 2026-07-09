//assumption vector size 1 nhi hona chahiye
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int iind_largest(vector <int> &nums){
    int lrg_idx = -1;
    int ii_lrg_idx = -1;
    //tc O(N) sc O(1)
    for(int i = 0 ; i < nums.size() ; i++){
        if(lrg_idx==-1 || nums[lrg_idx]<nums[i]){
            ii_lrg_idx=lrg_idx;
            lrg_idx=i;
        }
        else if(nums[lrg_idx]>nums[i] && nums[ii_lrg_idx]<nums[i]){
            ii_lrg_idx=i;
        }

    }
    return nums[ii_lrg_idx];
    
}

int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;
    vector <int> arr(size);
    for(int i = 0 ; i < size ; i++){
        cout<<"enter element no. "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"second largest : "<<iind_largest(arr)<<endl;
    return 0;
}