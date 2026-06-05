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

    static bool cp ( ListNode * &l, ListNode * &r){
        return l->val < r->val;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode * nl = new ListNode(0);
        ListNode * t = nl;
        if( lists.size() == 0 ) return nl->next;

        vector<ListNode * > arr;
        for( int i = 0; i< lists.size() ; i++){
            ListNode * temp = lists[i];
            while( temp != NULL){
                // cout<< temp->val<< " ";

                arr.push_back(temp);

                temp = temp->next;
            }
        }
        sort(arr.begin() , arr.end(), cp);
        for( int i =  0; i<arr.size() ; i++){
            cout<< arr[i]->val << " ";
            t->next = arr[i];
            t = t->next;
        }

        

        t->next = NULL;

        return nl->next;
    }
};