#include <iostream>
#include <cmath>
using namespace std;
int func(int m,int n){
    int low = 0;
    int high = m;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(pow(mid,n)==m)return mid;
        else if(pow(mid,n)>m)high=mid-1;
        else{
            low=mid+1;
        }
    }
    return -1;
}

int main(){
 int n,m;
 cin>>n>>m;
 cout<<func(m,n);
 return -1;
	
}