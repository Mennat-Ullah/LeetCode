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
    ListNode* middleNode(ListNode* head) {
        ListNode* step = head , *twicestep = head;
        // when twicestep arrive the end of the list the step will be in the mid.
        while(twicestep != nullptr && twicestep->next != nullptr)
        {
            step = step->next;
            twicestep = twicestep->next->next;
        }
        return step;
        
    }
};
