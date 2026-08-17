//Only for sorted arrays
#include <iostream>
#include <vector>
using namespace std;
int bs(vector <int> &arr , int tar){
	// O(log2N) O(1)
	int low=0;
	int high = arr.size()-1;
	int ans = high+1;
	while(low<=high){
		int mid = low + (high - low)/2;
		if(arr[mid]>=tar){
			high=mid-1;
			ans=mid;
		}
		else if(arr[mid]<tar){
			low = mid +1 ;
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
	cout<<"ans : "<<bs(vect,tar)<<"\n";
	return 0;
}