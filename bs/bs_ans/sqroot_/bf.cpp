#include <iostream>
using namespace std;
int func(){
    int n;
    cin>>n;
    for(int i = 0 ; i <= n ; i++){
        if(i*i>=n){
            return i;
        }
    }
    return -1;
}

int main(){
    cout<<func();
    return 0;
}
