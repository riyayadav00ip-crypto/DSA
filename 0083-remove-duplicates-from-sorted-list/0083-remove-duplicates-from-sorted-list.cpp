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
    ListNode* deleteDuplicates(ListNode* head) {
        struct ListNode *ptr = head;
        
        while(ptr != NULL && ptr->next != NULL) {
            if(ptr->val == ptr->next->val){
                ListNode* dup = ptr -> next;
                ptr -> next = ptr ->next -> next;
                delete dup;
            }
            else{
                ptr = ptr -> next;
            }

        }
        return head;
    }
};