//lefted
#include <vector>
#include <iostream>
using namespace std;

void rrotate(vector <int> &arr,int k){
    //O(N-1)=O(N)=O(K)=sc
    //tc k + size - k + k = size + k -> k worst value N-1 -> N+N-1 -> 2N-1 ->O(2N-1)-> O(N)
    vector <int> last;
    int size = arr.size();
    k %= size;
    if(arr.empty())return;
    for(int i = (size-k);i<size;i++){
        last.push_back(arr[i]);
    }
    for(int i= size-1;i>=k;i--){
        arr[i]=arr[i-k];
    }
    for(int i = 0 ; i < (last.size()) ; i++){
        arr[i]=last[i];
    }
}

int main(){
    int size;
    cin>>size;
    vector <int> nums(size);
    for(int i = 0 ; i < size ; i++){
        cin>>nums[i];
    }
    int k;
    cin>>k;
    rrotate(nums,k);
    for(int i = 0 ; i < size ; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}