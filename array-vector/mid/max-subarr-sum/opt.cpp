//kadane's algo

#include <iostream>
#include <vector>
#include <climits>


using namespace std;

int maxsum(vector <int> &nums){
    //O(N)tc sc O(1)
    int maxi=nums[0];
    int sum=nums[0];
    for(int i = 1 ; i < nums.size() ; i++){
        sum+=nums[i];
        maxi=max(sum,maxi);
        if(sum<=0){
            sum=0;
        }
    }

    return maxi;
}

int main(){
    int size;
    cin >> size;
    vector <int> arr(size);
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    cout<<" ans : "<<maxsum(arr)<<'\n';
    return 0;
}