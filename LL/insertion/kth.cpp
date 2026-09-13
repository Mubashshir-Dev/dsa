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

Node* inskth(Node* head,int data,int k){
    Node* temp = head;
    Node* new_ = new Node(data);
    if(temp==nullptr)return new_;
    if(k==1){
        new_->next=temp;
        return new_;
    }
    int counter = 0;
    while(temp->next!=nullptr){
        counter++;
        if(counter==k-1)break;
        temp=temp->next;
    }
    if(temp->next==nullptr){
        temp->next=new_;
        return head;
    }
    new_->next=temp->next;
    temp->next=new_;
    return head;
}

int main(){
    return 0;
}