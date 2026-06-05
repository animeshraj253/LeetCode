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

    struct cp{
        bool operator()(ListNode * l , ListNode * r) {
            return l->val > r->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode * nl = new ListNode(0);
        ListNode * t = nl;
        if( lists.size() == 0 ) return nl->next;

        priority_queue < ListNode* , vector<ListNode*>, cp > pq;

        for ( ListNode * t : lists){
            if( t ){
                pq.push(t);
            }
        }

        while( !pq.empty() ){
            ListNode * curr = pq.top();
            t->next = curr;
            t = t->next;
            curr = curr->next;

            pq.pop();

            if( curr ){
                pq.push(curr);
            }
        }


        t->next = NULL;
        return nl->next;
    }
};