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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr != NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0) return head;

        // Step 1: Reverse entire list
        head = reverse(head);

        // Step 2: Find length
        int length = 0;
        ListNode* temp = head;
        while(temp){
            length++;
            temp = temp->next;
        }

        // Step 3: Normalize k
        k = k % length;
        if(k == 0) return reverse(head); // undo reversal if no rotation needed

        // Step 4: Split after k nodes
        temp = head;
        int cnt = 1;
        while(cnt < k && temp->next != NULL){
            temp = temp->next;
            cnt++;
        }

        ListNode* second = temp->next;
        temp->next = NULL;

        // Step 5: Reverse both parts
        ListNode* Firstpart = reverse(head);
        ListNode* Secondpart = reverse(second);

        // Step 6: Attach
        ListNode* tail = Firstpart;
        while(tail->next != NULL){
            tail = tail->next;
        }
        tail->next = Secondpart;

        return Firstpart;
    }
};
