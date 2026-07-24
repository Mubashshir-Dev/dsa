#include <iostream>
#include <vector>

using namespace std;

int bs(vector <int> &arr,int target,int low,int high){
	if(low>high){
		return -1;
	}
	//int mid=(low+high)/2;
	int mid = low+(high-low)/2;
	if(arr[mid]==target)return mid;
	else if(arr[mid]>target) return bs(arr,target,low,mid-1);
	return bs(arr,target,mid+1,high);
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
	cout<<bs(arr,target,0,size-1);
	cout<<"\n";
	return 0;
}