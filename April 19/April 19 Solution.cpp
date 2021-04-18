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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int i = 1, len = 0;
        ListNode* result = head;
        while(head)
        {
            len ++;
            head = head -> next;
        }
        head = result;
        while(head)
        {
            i++;
            if(len - n == 0)
                return result->next;
            else if(i == len - n + 1)
                head->next = head->next->next;
            head = head->next;
        }
        return result;
    }
};
