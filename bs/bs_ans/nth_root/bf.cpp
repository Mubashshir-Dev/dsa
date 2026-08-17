
#include <iostream>
using namespace std;
int func(int m,int n){
 for(int i = 0;i<=m;i++){
  long long int ans = 1;
  //
  for(int j=1;j<=n;j++){
   ans*=i;}
  //
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