#include <vector>
#include <iostream>
using namespace std;

int ls(vector <int> &arr,int key){
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int size;
    cin>>size;
    vector <int> arr(size);
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<endl;
    cout<<ls(arr,key)<<endl;
    return 0;
}