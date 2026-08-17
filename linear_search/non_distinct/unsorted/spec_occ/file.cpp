#include <iostream>

int ls(int arr[],int size,int key,int occ){
	int count=0;
	for(int i = 0 ; i < size ;i++){
		if(arr[i]==key){
			count++;
		}
		if(count==occ){
			return i;
		}
	}
	return -1;
}

int main(){
	int key,size,occ;
	cin >> size;
	int arr[size];
	for(int i = 0 ; i <size; i++){
		cin>>arr[i];
	}
	cin>>key;
	cin>>occ;
	cout<<ls(arr,size,key,occ)<<endl;
	return 0;
}