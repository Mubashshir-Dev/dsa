#include <iostream>
#include <cmath>
using namespace std;
int func(int m,int n){
 for(int i = 0;i<=m;i++){
  long long ans=pow(i,n);
  if(ans==m){
   return i;}
 }
 return -1;}

int main(){
 int n,m;
 cin>>n>>m;
 cout<<func(m,n);
 return -1;
	
}