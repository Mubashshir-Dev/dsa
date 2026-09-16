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

Node* kth(Node* head, int k , int data){
	//O(N)
    if(head==nullptr)return nullptr;
	if(k==1){
		Node* temp = new Node(data,head,nullptr);
		head->prev=temp;
		return temp;
	}
	int count = 0;
	Node* temp = head;
	while(temp!=nullptr){
		count++;
		if(count==k){
			Node* box = new Node(data,temp,temp->prev);
			temp->prev->next=box;
			temp->prev=box;
			return head;

		}
		temp=temp->next;

	}
	return head;
}

int main(){
	return 0;
}