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
        ListNode* partition(ListNode* head, int x) {
            if(head==NULL || head->next==NULL) return head;
    
            ListNode* dummy1=new ListNode(-1);
            ListNode* dummy2=new ListNode(-1);
            ListNode* tmp1=dummy1;
            ListNode* tmp2=dummy2;
            ListNode* ptr=head;
    
            while(ptr!=NULL){
                if(ptr->val < x){
                    tmp1->next=ptr;
                    tmp1=tmp1->next;
                }else{
                    tmp2->next=ptr;
                    tmp2=tmp2->next;
                }
                ptr=ptr->next;
            }
    
            tmp2->next=nullptr;
            tmp1->next=dummy2->next;
            ListNode* newHead = dummy1->next;
            delete dummy1;
            delete dummy2;
    
            return newHead;
        }
    };