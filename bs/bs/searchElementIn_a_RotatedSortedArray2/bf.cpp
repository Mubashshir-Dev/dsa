#include <vector>
#include <iostream>
using namespace std;

bool search(vector <int> &arr,int key){
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
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
    cout<<search(arr,key)<<endl;
    return 0;
}
