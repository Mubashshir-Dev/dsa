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


Node* deltail(Node* head){
	if(head==nullptr) return nullptr;
	if(head->next==nullptr){ delete head; return nullptr;}
	Node* temp = head;
	while(temp->next->next!=nullptr){
	temp=temp->next;
	}
	Node* todel = temp->next;
	temp->next=nullptr;
	todel->prev=nullptr;
	delete todel;
	return head;
}