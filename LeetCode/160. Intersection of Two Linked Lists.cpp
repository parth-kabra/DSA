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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        while(headA!=NULL){
            ListNode *res=headB;
            while(res!=NULL){
                if(headA==res)return headA;
                res=res->next;
            }
            headA=headA->next;
        }
        return NULL;
    }
};
