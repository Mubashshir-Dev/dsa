#include <iostream>
#include <vector>
using namespace std;
int func(vector <int> &arr){
 for(int i = 0 ; i < arr.size(); i++){
    if(i==0){
        if(arr[i]!=arr[i+1]){
            return i;
        }
    }
    else if(i==arr.size()-1){
        if(arr[i]!=arr[i-1]){
            return i;
        }
    }
    else{
        if(!(arr[i]==arr[i+1] || arr[i]==arr[i-1])){
            return i;
        }
    }
 }
 return -1;
}


int main(){
	int size;
	cin>>size;
	vector <int> arr(size);
	for(int i = 0 ; i < size ; i++){
		cin>>arr[i];
	}
	cout<<func(arr)<<" ";
	return 0;
}