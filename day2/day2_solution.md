# Leetcode206单链表的反转
###  题目描述：  反转一个单链表。  
	示例:  
	输入: 1->2->3->4->5->NULL  
	输出: 5->4->3->2->1->NULL

### 使用三个指针遍历单链表逐个修改指向  
pre指向当前节点的前驱节点，tmp暂存当前节点的下一个节点  
### 代码如下：
```
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
```
其他方法还在探索中


