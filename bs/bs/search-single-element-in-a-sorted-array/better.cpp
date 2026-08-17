#include <vector>
#include <iostream>
using namespace std;
int func(vector<int> &arr){
	int ans = 0;
	for(int i = 0 ; i <arr.size();i++){
		ans^=arr[i];
	}
	return ans;
}

int main(){
	int size;
	cin>>size;
	vector<int> arr(size);
	for(int i = 0 ; i <size; i++)cin>>arr[i];
	cout<<func(arr)<<" ";
	return 0;
}