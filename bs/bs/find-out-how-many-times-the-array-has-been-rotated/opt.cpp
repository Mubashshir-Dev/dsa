#include <iostream>

int d(int arr[],int size){
	//O(LOG(N)) O(1)
	int low = 0;
	int high = size-1;
	int ans = -1;
	while(low<=high){
		int mid = low +(high-low)/2;
		if(arr[low]<=arr[mid]){
			if(ans ==-1 ||arr[ans]>arr[low]){
				ans=low;
			}
			low=mid+1;
		}
		else{
			if(ans==-1 || arr[ans]>arr[mid]){
				ans=mid;
			}
			high=mid-1;
		}
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