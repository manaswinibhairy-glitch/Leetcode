/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || k == 1) return head;
        ListNode* temp=head;
        int length=0;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        ListNode dummy(0);
        dummy.next=head;
        
        ListNode* prevGroup=&dummy;
        ListNode* curr =head;
        while(length>=k){
        ListNode* prev=NULL;
        ListNode* first=curr;
        for(int i=0;i<k;i++){
          ListNode* next=curr->next;
          curr->next=prev;
          prev=curr;
          curr=next;
        }
        prevGroup->next=prev;
        first->next=curr;
        prevGroup=first;
        length-=k;
    }
    return dummy.next;
    }
};