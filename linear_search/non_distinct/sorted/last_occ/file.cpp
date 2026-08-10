#include <iostream>
using namespace std;
int ls(int arr[],int size,int key){
	int ans=-1;
	for(int i = 0 ; i < size ; i++){
		if(arr[i]==key){
			ans=i;
			while(ans<size && arr[ans]==key){
				ans++;
			}
			ans--;
			break;
		}
		}
	return ans;	
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