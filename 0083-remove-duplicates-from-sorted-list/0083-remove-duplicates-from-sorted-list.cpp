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
        ListNode* it = head;
        while(it!=nullptr)
        {
            ListNode* it1=it->next;
            ListNode* prev=it;
            while(it1!=nullptr)
            {
                if(it1->val==it->val){
                    prev->next=it1->next;
                    it1=it1->next;
                    continue;
                }
                it1=it1->next;
                prev=prev->next;
            }
            it=it->next;
        }
        return head;  
    }
};