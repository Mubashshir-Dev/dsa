#include <iostream>
#include <vector>
using namespace std;

void rev(vector <int> & arr,int start,int end){
    //tc -> O(N/2)  sc-> O(1)
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void r_rotate_by_k(vector <int> & arr,int k){
    //tc O(2N) sc O(1)
    if(arr.empty())return;
    k%=arr.size();
    rev(arr,arr.size()-k,arr.size()-1);
    rev(arr,0,arr.size()-k-1);
    rev(arr,0,arr.size()-1);
}


int main(){
    int k;
    cin>>k;
    int size;
    cin>>size;
    vector <int> nums(size);
    for(int i = 0 ; i < size ; i++)cin>>nums[i];
    r_rotate_by_k(nums,k);
    for(int i = 0 ; i < size ; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}