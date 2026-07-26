#include <iostream>
#include <vector>
using namespace std;


int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high =nums.size()-1;
    int ans = high + 1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}



int main(){
    int size;
    cin >> size;
    vector <int> vect(size):
    for(int  i = 0 ; i < size ; i++)cin>>vect[i];
    int tar;
    cin >> tar;
    cout<<" ans : "<<searchInsert(vect,tar);
    return 0;
}