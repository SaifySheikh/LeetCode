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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            if(list1==NULL && list2==NULL) return list2;
            if(list1==NULL) return list2;
            if(list2==NULL) return list1;
    
            ListNode* dummy=new ListNode(-1);
            ListNode* temp=dummy;
            ListNode* ptr1=list1;
            ListNode* ptr2=list2;
            while(ptr1!=NULL && ptr2!=NULL){
                if(ptr1->val < ptr2->val){
                    temp->next=ptr1;
                    temp=temp->next;
                    ptr1=ptr1->next;
                }else{
                    temp->next=ptr2;
                    temp=temp->next;
                    ptr2=ptr2->next;
                }
            }while(ptr1!=NULL){
                temp->next=ptr1;
                temp=temp->next;
                ptr1=ptr1->next;
            }
            while(ptr2!=NULL){
                temp->next=ptr2;
                temp=temp->next;
                ptr2=ptr2->next;
            }
            return dummy->next;
        }
    };