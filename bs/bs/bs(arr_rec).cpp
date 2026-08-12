#include <iostream>
using namespace std;
int bs(int low ,int high,int size,int arr[],int key){


    if(low>high){
        return -1;
    }

    int mid = low+(high-low)/2;

    if(arr[mid]==key)return mid;
    else if(arr[mid]>key){return bs(low,mid-1,size,arr,key);}
    return bs(mid+1,high,size,arr,key);
}

int main(){

    int size;
    cin>>size;
    int arr[size];
    for(int i = 0; i < size ; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<" index is : "<<bs(0,size-1,size,arr,key);
    return 0;
}
#include <iostream>
using namespace std;
int bs(int low ,int high,int size,int arr[],int key){


    if(low>high){
        return -1;
    }

    int mid = low+(high-low)/2;

    if(arr[mid]==key)return mid;
    else if(arr[mid]>key){return bs(low,mid-1,size,arr,key);}
    return bs(mid+1,high,size,arr,key);
}

int main(){

    int size;
    cin>>size;
    int arr[size];
    for(int i = 0; i < size ; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<" index is : "<<bs(0,size-1,size,arr,key);
    return 0;
}
