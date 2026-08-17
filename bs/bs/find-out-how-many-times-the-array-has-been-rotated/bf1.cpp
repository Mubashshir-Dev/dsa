#include <iostream>

int d(int arr[],int size){
	int first_ele = arr[0];
	int min_val = first_ele;
	int min_ind = 0;
	for(int i = 1 ; i < size ; i++){
		if(min_val > arr[i]){
			min_val=arr[i];
			min_ind=i;
		}
	}
	return min_ind;
}

int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i = 0 ; i < size ; i++)cin>>arr[i];
	cout<<" "<<d(arr,size)<<endl;
	return 0;
}