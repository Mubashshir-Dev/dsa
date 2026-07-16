
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int iind_largest(vector <int> &nums){
    //tc is O(2N)
    //sc is O(1)
    int largest_ind = -1;
    for (int i = 0 ; i < nums.size() ; i++){
        if(largest_ind==-1||nums[i]>nums[largest_ind])largest_ind=i;
    }
    int iind_largest = -1;
    for(int i = 0 ; i < nums.size() ; i++){
        if(iind_largest==-1 && nums[i]!=nums[largest_ind] || nums[iind_largest]<nums[i] && nums[i]!=nums[largest_ind]){
            iind_largest=i;
        }
    }
    return nums[iind_largest];
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