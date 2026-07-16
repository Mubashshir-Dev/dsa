//assumption vector size 1 nhi hona chahiye
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int iind_largest(vector <int> &nums){
    //tc O(NLOGN)+O(N)
    //sc O(logN) base 2 due to recurrsion stack space by merge 
    sort(nums.begin(),nums.end());
    int k = nums.size()-2;
    while(k!=0){
        if(nums[nums.size()-1]!=nums[k]){
            return nums[k];
        }
        k--;
    }
    return -1;
    
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