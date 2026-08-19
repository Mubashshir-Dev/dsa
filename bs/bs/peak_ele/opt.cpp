#include <iostream>
#include <vector>
using namespace std;
int func(vector <int> &arr){
	int n = arr.size();
	if(n==0)return -1;
	if(n==1)return 0;
	if(arr[n-2]<arr[n-1])return n-1;
	if(arr[0]>arr[1])return 0;
	int low = 1;
	int high = n-1;
	while(low<=high){
		int mid = low+(high-low)/2;
		if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])return mid;
		else if(arr[mid]>arr[mid-1]){low=mid+1;}
		//(arr[mid]<arr[mid-1] && arr[mid+1]<arr[mid])
		else{
			high=mid-1;
		}

	}
	return -1;

}

int main(){ int size;
	cin>>size;
	vector <int> arr(size);
	for(int i = 0 ; i < size ; i++)cin>>arr[i];
	cout<<func(arr);
	return 0;
}