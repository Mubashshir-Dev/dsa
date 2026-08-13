#include <iostream>
using namespace std;
int dsum_(int arr[][100] , int n){
    int dsum = 0;
    for(int i = 0 ; i < n ; i++){
        dsum+=arr[i][i];
        dsum+=arr[i][n-1-i];
    }
    if(n%2!=0){
        dsum-=arr[n/2][n/2];
    }
    return dsum;
}

int main(){
    int n;
    cin>>n;
    int arr[100][100];
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n; j++){
            cin>>arr[i][j];
    }
    }
    cout<<dsum_(arr,n);
    return 0;
}