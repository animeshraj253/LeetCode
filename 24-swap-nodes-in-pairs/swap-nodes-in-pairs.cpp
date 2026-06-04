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

    
    
    ListNode* swapPairs(ListNode* head) {
        if( head == NULL) return head;
        if( head->next == NULL) return head;
         
        ListNode * tempList = new ListNode(0);
        ListNode * temp = tempList;

        ListNode * s = head;
        ListNode * f = NULL;  

        while ( s != NULL && s->next != NULL ){

            f = s->next;

            ListNode * n = f->next;

            temp->next = f;
            temp = temp->next;

            temp -> next = s;
            temp = temp-> next;

            temp->next = NULL;

            s = n; 
            
        }   

        temp->next = s;

        return tempList->next;

    }
};