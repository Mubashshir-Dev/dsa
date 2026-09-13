#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node* prev;
	Node(int d, Node* n=nullptr, Node* p=nullptr){
		data=d;
		next=n;
		prev=p;
	}
};

int main(){
    return 0;
}