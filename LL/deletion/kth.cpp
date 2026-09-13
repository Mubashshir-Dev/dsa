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

Node* delkth(Node* head,int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp = head;
        head=head->next;
        free(temp);
        return head;
    }
    int counter=0;
    Node* temp = head;
    while(temp->next!=nullptr){
        counter++;
        if(counter==k-1){
            Node* tmp_var = temp->next;
            temp->next=tmp_var->next;
            delete temp;
            delete tmp_var;
            return head;
        }
        temp=temp->next;
    }
    return head;
}

int main(){
    return 0;
}