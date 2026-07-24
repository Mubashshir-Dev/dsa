#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int func(vector<int> &nums){
    //O(N) O(1)
    int ind = -1;
    for(int i = nums.size()-2 ; i > 0 ; i--){
        if(nums[i+1]>nums[i]){
            ind=i;
            break;
        }

    }
    if(ind ==-1){
        reverse(nums.begin(),nums.end());
    }
    for(int i =nums.size()-1; i>=ind;i-- ){
        if(nums[i]>nums[ind]){
            swap(nums[i],nums[ind]);
            break;
        }
    }
    if(ind!=-1){
        reverse(nums.begin()+ind+1,nums.end());
    }
    return 0;
}

int main(){
    int size;
    cin >> size;

    vector<int> vec(size);

    for(int i = 0; i < size; i++){
        cin >> vec[i];
    }

    cout << "Ans: " << func(vec) << "\n";

    return 0;
}