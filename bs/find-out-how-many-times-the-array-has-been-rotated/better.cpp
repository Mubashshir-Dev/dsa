#include <iostream>

int d(int arr[],int size){
	//O(N) O(1)
	int ans = 0;
	if(size==0)return -1;
	if(size==1)return 0;
	int box = arr[0];
	for(int i = 1 ; i < size ; i++){
		if(box>arr[i]){
			return i;
		}
		box=arr[i];
	}
	return ans;
}

int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i = 0 ; i < size ; i++){
		cin>>arr[i];
	}
	cout<<d(arr,size);
	return 0;
}