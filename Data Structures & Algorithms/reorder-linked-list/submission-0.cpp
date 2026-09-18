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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        // we have found the slow
        ListNode* second = slow->next;
        slow->next = NULL;
        // now reversing the second part of the ll
        ListNode* prev = NULL;
        while(second){
            ListNode* nextNode = second->next;
            second->next = prev;
            prev = second;
            second = nextNode; 
        }
        // now the list is reverssed
        second = prev;
        ListNode* first = head;
        while(second){
            ListNode* nextfirst = first->next;
            ListNode* nextsecond = second->next;
            first->next = second;
            second->next =  nextfirst;

            first = nextfirst;
            second= nextsecond; 
        }

    }
};
