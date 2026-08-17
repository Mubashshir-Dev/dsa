#include <iostream>
#include <vector>

int mini_(vector <int> &arr){
	int mini=arr[0];
	for(int i = 1 ; i < arr.size() ; i++){
		if(arr[i]<mini){
			mini=arr[i];
		}
	}
	return mini;
}

int main(){
	int size;
	cin>>size;
	vector <int> arr(size);
	for(int i = 0 ; i < size ; i++){
		cin>>arr[i];
	}
	cout<<mini_(arr);
	return0;
}