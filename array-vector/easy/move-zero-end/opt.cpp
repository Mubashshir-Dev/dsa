#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void movZ(vector <int> &arr){
    //O(1)->sc
    //O(N)->tc 2 ptr
    int i = 0;
    int j = 1;
    int size = arr.size();
    while(j<size){
        if(arr[i]!=0){
            i++;j++;
        }
        else if(arr[i]==0 && arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else if(arr[i]==0 && arr[j]==0){
            j++;
        }
    }
}

int main(){
    int size;
    cin>>size;
    vector <int> arr(size);
    for(int i = 0 ; i < size ; i++)cin>>arr[i];
    movZ(arr);
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}