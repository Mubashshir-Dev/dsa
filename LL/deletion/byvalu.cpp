#include <iostream>

using namespace std; 

class Node{
public:
	int data;
	Node* next;
	Node(int d, Node* n=nullptr){
		data=d;
		next=n;
	}
};

Node* delbyval(Node* head, int k){
	if(head==nullptr)return nullptr;
	if(head->data==k){
		Node* temp = head;
		head=head->next;
		delete temp;
		return head;
	}
	Node* temp = head;
	while(temp->next!=nullptr && temp->next->data!=k){
		temp=temp->next;
		
	}
	if(temp->next == nullptr) return head;
	Node* store = temp->next;
	temp->next=store->next;
	delete store;
	return head;
    
}