#include <iostream>
#include <vector>
using namespace std;
int func(vector <int> &arr){
	//size!=0 , size==1 -> arr[0] , size must be odd (2m+1)
	int low = 1;
	int size = arr.size()-2;
	int high = size-1;
	if(size==1)return arr[0];
	if(arr[0]!=arr[1]) return arr[0];
	if(arr[size-1]!=arr[size-2])return arr[size-1];
	while(low<=high){
		int mid = low + (high-low)/2;
		if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1])return mid;
		if((mid%2==1 && arr[mid-1]==arr[mid])||(mid%2==0 && arr[mid]==arr[mid+1])){
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
	vector<int> arr(size);
	for(int i = 0; i< size ;i++)cin>>arr[i];
	cout<<func(arr)<<" ";
	return 0;
}