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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int length=0;
        
        while(temp!=NULL){
          length++;
          temp=temp->next;
        }
        int first=length-n+1;
        if(first==1){
             ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        temp=head;
        int cnt=0;
        ListNode* prev=NULL;
        while(temp!=NULL){
            cnt++;
            if(cnt==first){
              prev->next=temp->next;
              delete temp;
              break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};