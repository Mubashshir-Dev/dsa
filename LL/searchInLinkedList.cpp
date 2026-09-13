#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    
    Node(int d,Node* n=nullptr){
        data = d;
        next=n;
    }
};

bool search(Node* head,int key){
    //best case O(1) ; worst case O(N) ; avgcase O(N/2);
	Node* temp = head;
	//nullptr works as false
	while(temp){
		if(temp->data==key)return true;
		temp=temp->next;
	}
	return false;
}


int main(){
    return 0;
}