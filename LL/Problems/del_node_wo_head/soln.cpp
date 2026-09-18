/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//O(N) tc sc O(1)
#include <iostream>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node==nullptr)return;
        //tail nhi hoga
        ListNode* temp = node;
        while(temp->next->next!=nullptr){
            temp->val=temp->next->val;
            temp=temp->next;
        }
        temp->val=temp->next->val;
        ListNode* tmp=temp->next;
        temp->next=nullptr;
        
    }
};

int main(){
    return 0;
}