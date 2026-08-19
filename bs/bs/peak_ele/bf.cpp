#include <iostream>
#include <vector>
using namespace std;
int peak(vector <int> &arr){
    int size = arr.size();
    if(size == 0)return -1;
    if(size == 1 || arr[0]>arr[1])return 0;
    if(arr[size-2]<arr[size-1]) return size-1;
    for(int i = 1 ; i <size-1 ; i++){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            return i;
        }
    }
    return -1;
}

int main(){
    int size;
    cin>>size;
    vector <int> arr(size);
    for(int i = 0 ; i < size ; i++)cin>>arr[i];
    cout<<peak(arr);
    return 0;
}