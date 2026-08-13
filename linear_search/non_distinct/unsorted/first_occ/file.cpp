#include <iostream>
using namespace std;
int ls(int arr[],int size,int key){
	for(int i = 0 ; i < size ; i++){
			if(arr[i]==key)return i;}
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
	cout<<ls(arr,size,key)<<endl;
	return 0;}