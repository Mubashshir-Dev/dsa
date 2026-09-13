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

Node* instail(Node* head,int data){
    Node* temp = head;
    Node* new_ = new Node(data);
    if(temp==nullptr) return new_;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=new_;
    return head;
}

int main(){
    return 0;
}