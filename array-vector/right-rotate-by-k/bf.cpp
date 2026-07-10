//lefted
#include <vector>
#include <iostream>
using namespace std;

void rrotate(vector <int> &arr,int k){
    vector <int> last;
    for(int i = 0 ; i < k ; i++){
        last.push_back(arr[i]);
    }
    for(int i = 0 ; i < k ; i++ ){
        arr[i]=arr[k+i];
    }
    for(int i = 0 ; i < k ; i++){
        arr[k+i]=last[i];
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