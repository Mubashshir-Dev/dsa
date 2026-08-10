#include <iostream>
using namespace std;
int ls(int arr[],int size,int key,int occ){
	int ans=-1;
	for(int i = 0 ; i < size ; i++){
		if(arr[i]==key){
			ans = i;
			if(ans+occ-1<size && arr[ans+occ-1]==key){
				return ans+occ-1;}
			break;
		}
	}
	return -1;
}

int main(){
	int size;
	cin >> size;
	int arr[size];
	for(int i = 0 ; i  < size ; i++){
		cin>>arr[i];
	}
	int key;
	cin >> key;
	int occ;
	cin>>occ;
	cout<<ls(arr,size,key,occ)<<endl;
	return 0;}