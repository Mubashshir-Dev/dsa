//assumption ek hi largest element hoga
//array empty nhi hoga
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int largest(vector <int> &nums){
    //tc taken by in built sort is O(NLOGN)
    //sc take is logN (by merge sort base is 2 recurssion stack space) 
    sort(nums.begin(),nums.end());
    return nums[nums.size()-1];
}

int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;
    vector<int> nums(size);
    for(int i = 0 ; i < size ;i++){
        cout<<"enter element no. "<<i+1<<" : ";
        cin>>nums[i];
    }
    cout<<"largest : "<<largest(nums)<<endl;
    return 0;
}