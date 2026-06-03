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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp = new ListNode(0);
        ListNode * tail = temp;
        int pass = 0;

        while(l1 != nullptr || l2 != nullptr || pass != 0){
            int num1;
                if ( l1 == nullptr)
                    num1 = 0;
                else 
                    num1 = l1->val;
            int num2;
                if(l2 == nullptr)
                    num2 = 0;
                else
                    num2 = l2->val;

            int sum = num1 + num2 + pass;
            int digit = sum % 10;
            pass = sum / 10;

            ListNode *newNode = new ListNode(digit);
            tail->next = newNode;
            tail = tail->next;
            
            if ( l1 != nullptr)
                l1 = l1->next;
            else
                l1 = nullptr;
            if(l2 != nullptr)
                l2 = l2->next;
            else
                l2 = nullptr;
        }

        ListNode* result = temp->next;
        delete temp;
        return result;
    }
};