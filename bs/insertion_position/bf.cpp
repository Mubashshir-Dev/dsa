#include <iostream>
#include <vector>
using namespace std;

int i_p(vector<int> &arr, int tar) {
    int size = arr.size();

    for (int i = 0; i < size; i++) {
        if (arr[i] >= tar) {
            if (i == 0)
                return i;
            else if (arr[i - 1] <= tar)
                return i;
        }
    }

    return size;
}


int main(){
	int size;
	cin >> size;
	vector <int> vect(size):
	for(int  i = 0 ; i < size ; i++)cin>>vect[i];
	int tar;
	cin >> tar;
	cout<<" ans : "<<i_p(vect,tar);
	return 0;
}