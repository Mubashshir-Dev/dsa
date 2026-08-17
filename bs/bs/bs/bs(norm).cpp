#include <iostream>
#include <vector>

using namespace std;

int bs(vector <int> &arr,int target){
	int low = 0;
	int high = arr.size()-1;
	while(low<=high){
		//int mid = (low + high)/2;
		int mid = low+(high-low)/2;
		if(arr[mid]==target){
			return mid;
		}
		else if(arr[mid]<target){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
}

int main(){
	int size;
	cin>>size;
	vector <int> arr(size);
	for(int i = 0 ; i <size ; i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	cout<<bs(arr,target);
	cout<<endl;
	return 0;
}