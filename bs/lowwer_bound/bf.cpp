//Only for sorted arrays
#include <iostream>
#include <vector>
using namespace std;
int ls(vector <int> &arr , int tar){
	//O(N) O(1)
	int size = arr.size();
	for(int i = 0 ; i < size ; i++){
		if(arr[i]>=tar)return i;
	}
	return size;
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
	cout<<"ans : "<<ls(vect,tar);
	return 0;
}