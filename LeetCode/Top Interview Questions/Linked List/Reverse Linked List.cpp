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
    ListNode* reverseList(ListNode* head) {
        ListNode * dh=NULL;
        while(head!=NULL){
            ListNode * nextptr=head->next;
            head->next=dh;
            dh=head;
            head=nextptr;
        }
        return dh;
    }
};
