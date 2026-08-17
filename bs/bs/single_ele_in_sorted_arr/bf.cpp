#include <iostream>
#include <vector>

int func(vector <int> &arr){
	int low = 0;
	int high = 1;
	while(low < arr.size() && high < arr.size()){
		if(arr[low]!=arr[high]){
			return low;
		}
		low+=2;
		high+=2;
	}
	return arr.size()-1;
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