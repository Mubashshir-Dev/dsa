#include <iostream>

int ls(int arr[],int size,int key){
	int indx =-1;
	for(int i = 0 ; i < size ;i++){
		if(arr[i]==key){
			indx=i;
		}
	}
	return indx;
}

int main(){
	int key,size;
	cin >> size;
	int arr[size];
	for(int i = 0 ; i <size; i++){
		cin>>arr[i];
	}
	cin>>key;
	cout<<ls(arr,size,key)<<endl;
	return 0;
}