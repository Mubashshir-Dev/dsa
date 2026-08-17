#include <iostream>
#include <vector>

using namespace std;

pair <int,int> firstOccuranceLastOccurance(vector <int> &arr,int tar){
	int firstOccurance = -1;
	int lastOccurance = -1;
	for(int i = 0 ; i < arr.size() ; i++){
		if(arr[i]==tar && firstOccurance==-1){
			firstOccurance=i;
		}
		if(arr[i]==tar){
			lastOccurance=i;
		}
	}

	return {firstOccurance,lastOccurance};
}

int main(){
	int size;
	cin>>size;
	vector <int> arr(size);
	for(int i = 0 ; i < size ; i++){
		cin>>arr[i];}
	int tar;
	cin>>tar;
	pair <int,int> ans = firstOccuranceLastOccurance(arr,tar);
	cout<<"firstOccurance at : "<<ans.first<<" lastOccurance at : "<<ans.second<<endl;
	return 0;
}