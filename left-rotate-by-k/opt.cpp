#include <iostream>
#include <vector>
using namespace std;

void rev(vector <int> & arr,int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void l_rotate_by_k(vector <int> & arr,int k){
    if(arr.empty())return;
    k%=arr.size();
    rev(arr,0,k-1);
    rev(arr,k,arr.size()-1);
    rev(arr,0,arr.size()-1);
}


int main(){
    int k;
    cin>>k;
    int size;
    cin>>size;
    vector <int> nums(size);
    for(int i = 0 ; i < size ; i++)cin>>nums[i];
    l_rotate_by_k(nums,k);
    for(int i = 0 ; i < size ; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}