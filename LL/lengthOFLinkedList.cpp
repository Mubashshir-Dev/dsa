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

int lenOfLinkedList(Node* head){
	//O(N)
	int counter=0;
	Node* temp = head;
	//nullptr works as false
	while(temp){
		counter++;
		temp=temp->next;
	}
	return counter;
}


int main(){
    return 0;
}