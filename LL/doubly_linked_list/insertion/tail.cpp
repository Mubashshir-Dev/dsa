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


Node* instail(Node* head,int data){
    Node* temp = head;
    if(temp==NULL)return new Node(data);
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    if(temp->prev==nullptr){
        Node* new_ = new Node(data,temp,nullptr);
        temp->prev=new_;
        return head;
    }
    Node* new_ = new Node(data,temp,temp->prev);
    temp->prev=new_;
    temp->prev->next=new_;
    return head;
    
} 