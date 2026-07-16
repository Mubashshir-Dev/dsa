
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
void is_sorted(vector <int> &nums){
    //tc O(N) sc O(1)
    int prev = nums[0];
    for(int i = 1 ; i < nums.size() ; i++){
        if(!(nums[i]>=prev)){
            cout<<"NOT SORTED"<<endl;
            return;
        }
        prev=nums[i];
    }
    cout<<"SORTED"<<endl;
    return ;
    
}

int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;
    vector <int> arr(size);
    for(int i = 0 ; i < size ; i++){
        cout<<"enter element no. "<<i+1<<" : ";
        cin>>arr[i];
    }
    is_sorted(arr);
    return 0;
}