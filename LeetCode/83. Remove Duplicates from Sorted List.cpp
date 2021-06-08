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
        ListNode* res=head;
        while(res != NULL && res->next != NULL){
            if(res->next->val == res->val){
                res->next=res->next->next;
            }
            else{
                res=res->next;
            }
        }
        return head;
    }
};
