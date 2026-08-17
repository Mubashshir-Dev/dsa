#include <iostream>
#include <vector>
using namespace std;

int ls(vector <int> & arr , int tar){
	int occurance=0;
	for(int i = 0 ; i < arr.size() ;i++){
		if(arr[i]==tar)occurance++;
	}
	return occurance;
}

int main(){
	int size;
	cin>>size;
	vector <int> arr(size);
	for(int i = 0 ; i < size ; i++){
		cin>>arr[i];
	}
	int tar;
	cin >> tar;
	cout<<"occurance : "<<ls(arr,tar)<<endl;
	return 0;
}