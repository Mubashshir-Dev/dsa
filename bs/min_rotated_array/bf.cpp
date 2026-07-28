#include <iostream>
#include <vector>

int min(vector <int> &arr){
	int size= arr.size();
	if(arr.empty)return -1;
	for(int i = 0 ; i < size-1 ; i++){
		if(arr[i]>arr[i+1]){
			return arr[i+1];
		}
	}
	return arr[0];
}

int main(){
	int size;
	cin>> size;
	vector <int> arr(size);
	for(int i = 0 ; i < size ; i++){
		cin>>arr[i];
	}
	cout<<min(arr);
	return0;
}