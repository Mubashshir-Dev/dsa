//Only for sorted arrays
#include <iostream>
#include <vector>
using namespace std;
int floor(vector <int> & arr , int tar){
	int low = 0;
	int high=arr.size()-1;
	int ans=-1;
	while(low<=high){
		int mid = low + (high - low)/2 ;
		if(arr[mid]>tar){
			high=mid-1;
		}
		else{
			ans = mid;
			low = mid+1;
		}
	}
	return ans;
}

int main(){
	int size;
	cin>>size;
	vector <int> vect(size);
	for(int i = 0 ; i < size ; i++){
		cin>>vect[i];
	}
	int tar;
	cin>>tar;
	cout<<"ans : "<<floor(vect,tar)<<"\n";
	return 0;
}