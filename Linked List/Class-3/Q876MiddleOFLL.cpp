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
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL){
            //fast ko ek step age badhao
            fast = fast->next;
            //null check karo and fast ko ek step aur age badhao
            if(fast != NULL){
                fast = fast->next;
                //abb fast ke 2 step complete ho chuka haii
                //toh ab slow ko bhi ek step age karo
                slow = slow->next;
            }            
        }
        return slow;        
    }
};