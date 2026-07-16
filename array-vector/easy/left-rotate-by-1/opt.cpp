#include <vector>
#include <iostream>
using namespace std;
void lrotate_1(vector <int> &nums){
    if(nums.empty())return;
    //O(N) TC and SC is O(1)
    int last = nums[0];
    for(int i = 0 ; i < nums.size()-1 ; i++){
        nums[i]=nums[i+1];
    }
    nums[nums.size()-1]=last;
}

int main(){
    int size;
    cin>>size;
    vector <int> arr(size);
    for(int i = 0 ; i < size ; i++)cin>>arr[i];
    lrotate_1(arr);
    cout<<endl;
    for(int i = 0 ; i < size ; i++)cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}