class Solution {
    public:
        ListNode* reverseEvenLengthGroups(ListNode* head) {
            ListNode* prev = head;
            ListNode* curr = head->next;
            int groupSize = 2;
    
            while (curr) {
                ListNode* start = curr;
                int count = 0;
    
                while (count < groupSize && curr) {
                    curr = curr->next;
                    count++;
                }
    
                if (count % 2 == 0) {
                    ListNode* prevGroupEnd = prev;
                    ListNode* prevNode = nullptr;
                    ListNode* temp = start;
                    
                    for (int i = 0; i < count; i++) {
                        ListNode* nextNode = temp->next;
                        temp->next = prevNode;
                        prevNode = temp;
                        temp = nextNode;
                    }
    
                    prevGroupEnd->next = prevNode;
                    start->next = temp;
                    prev = start;
                } else {
                    prev = start;
                    while (--count) {
                        prev = prev->next;
                    }
                }
    
                groupSize++;
            }
    
            return head;
        }
    };
    