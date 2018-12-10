/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if (head == NULL)  return head;
        ListNode* p = head, *pre = p, *next, *resHead;
        for(ListNode* temp = head->next; temp != NULL; pre = p,p = temp  ){
            temp = p->next;
            if(pre == p){
                p->next = NULL;
            }
            else p->next = pre;
            
            
        }
        resHead = pre;
        return resHead;
    }
};
