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

Node* insByval(Node* head,int val){
    if(head==nullptr)return nullptr;
    Node* new_ = new Node(val);//new node
    Node* temp =  head;
    if(head->data==val){
        new_->next=head;
        head = new_;
        return head;
    }
    while(temp->next!=nullptr){
        if(temp->next->data==val){
            new_->next=temp->next;
            temp->next=new_;
            head=temp;
            return head;
        }
        temp = temp->next;
    }
    return head;

}

int main(){
    return 0;
}