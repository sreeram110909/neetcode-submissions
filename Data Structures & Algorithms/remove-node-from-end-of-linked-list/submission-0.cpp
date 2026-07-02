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
        
        ListNode* last = head;
        int total = 1;

        while(last->next != NULL){
            last = last->next;
            total++;
        }
        
        if (n == total) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        int c = total - n;

        ListNode* curr = head;
        int count = 1;

        while(count != c){
            curr = curr->next;
            count++;
        }

        ListNode* temp = curr->next;
        curr->next = temp->next;
        delete temp;

        return head;
    }
};
