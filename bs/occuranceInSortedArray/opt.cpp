#include <iostream>
#include <vector>

using namespace std;
int firstOccuranceLastOccurance(vector <int> &arr,int tar){
	int firstOccurance = -1;
	int low = 0;
	int high=arr.size()-1;
	while(low<=high){
		int mid = low + (high - low)/2;
		if(arr[mid]==tar){
			firstOccurance=mid;
			high=mid-1;
		}
		else if(arr[mid]<tar){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	if(firstOccurance==-1)return 0;
	low = 0;
	high=arr.size()-1;
	int lastOccurance = -1;
	while(low<=high){
		int mid = low + (high - low)/2;
		if(arr[mid]==tar){
			lastOccurance=mid;
			low=mid+1;
			
		}
		else if(arr[mid]<tar){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return lastOccurance-firstOccurance+1;
}

int main(){
	int size;
	cin>>size;
	vector <int> arr(size);
	for(int i = 0 ; i < size ; i++){
		cin>>arr[i];}
	int tar;
	cin>>tar;
	int ans = firstOccuranceLastOccurance(arr,tar);
	cout<<"occurance : "<<ans<<end;
	return 0;
}