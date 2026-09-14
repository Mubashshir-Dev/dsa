
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


Node* delkth(Node* head,int k){
	Node* temp = head;
	if(head==nullptr)return nullptr;
	if(k==1){
		head=head->next;
		if(head==nullptr){
			delete temp;
			return head;}
		temp->next=nullptr;
		delete temp;
		head->prev=nullptr;
		return head;
	}
	int count = 0;
	while(temp!=nullptr){
		count++;
		if(count==k-1){
			Node* todel=temp->next;
			temp->next=todel->next;
            if(temp->next!=nullptr){
                temp->next->prev=temp;

            }
			todel->prev=nullptr;
			todel->next=nullptr;
			delete todel;
			return head;}
		temp = temp->next;
	}
	return head;
}