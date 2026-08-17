#include <iostream>
#include <vector>

int func(vector <int> &arr){
	int ans = 0;
	for(int x : arr){
		ans^=x;
	}
	return ans;
}


int main(){
	int size=0;
	while(size%2==0){
		cin>>size;
	}
	vector <int> arr;
	for(int i =0 ; i < size ;i++){
		cin>>arr[i];
	}
	cout<<func(arr)<<'\n';
	return 0;
}