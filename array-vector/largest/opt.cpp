//assumptions pura array should not INT_MIN
//empty bhi na ho
//ek hi largest element ho 
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int largest(vector <int> &nums){
    int ans=INT_MIN;
    //tc is O(N) sc is O(1)
    for(int i = 0 ; i < nums.size() ; i++){
        if(ans<nums[i])ans=nums[i];
    }
    return ans;
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