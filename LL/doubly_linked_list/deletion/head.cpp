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


Node* delhead(Node* head){
	if(head==NULL)return nullptr;
	Node* temp = head;
	
	head=head->next;
	temp->next=nullptr;
	delete temp;
	if(head!=nullptr){
		head->prev=nullptr;}
	return head;
} 