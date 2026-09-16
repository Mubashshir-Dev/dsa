#include <iostream>
#include <stack>

using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int d,Node* n=nullptr,Node* p=nullptr){
        data=d;
        next=n;
        prev=p;
    }
};

Node* rev(Node* head){
    stack <int> stk;
    Node* temp = head;
    while(temp!=nullptr)
    {   stk.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=nullptr)
    {   temp->data=stk.top();
        stk.pop();
        temp=temp->next;
    }
    return head;
}

int main(){


    return 0;
}