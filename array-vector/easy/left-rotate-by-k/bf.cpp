#include <vector>
#include <iostream>
using namespace std;
void lrotate_1(vector <int> &nums,int k){
    //O(N) is tc 1 traverse
    //sc is O(k) or we can say k=n-1 worst case now O(n-1) = O(n) sc canbe O(N)
    vector <int> back;
    if (nums.empty()) return;
    k %= nums.size();
    for(int i = 0; i < k ; i++)back.push_back(nums[i]);
    for(int i = k ; i < nums.size() ; i++){
        nums[i-k]=nums[i];
    }
    int j = 0;
    for(int i = nums.size()-k ; i < nums.size() ;i++){
        nums[i]=back[j++];
    }
}

int main(){
    int size;
    cin>>size;
    int k;
    cin>>k;
    vector <int> arr(size);
    for(int i = 0 ; i < size ; i++)cin>>arr[i];
    lrotate_1(arr,k);
    cout<<endl;
    for(int i = 0 ; i < size ; i++)cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}