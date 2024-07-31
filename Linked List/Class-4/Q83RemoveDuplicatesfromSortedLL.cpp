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
    ListNode* deleteDuplicates(ListNode* head) {
        //1st case -->LL is empty
        if(head == NULL)
            return head;
        
        //2nd case--> LL having single node
        if(head->next == NULL)
            return head;
        
        //3rd acse --> LL is not empty  (>1 node)       
        ListNode* prev = head;
        ListNode* temp = prev->next;

        while(temp != NULL){
            //duplicate check 
            if(temp -> val == prev->val){
                //duplicate found
                prev->next = temp->next;
                temp->next = NULL;
                delete temp;
            }
            else{
                //temp ko set kardo or age badhte jao
                prev = prev->next;
                temp = temp->next;
            }
            //temp ko set kardo 
            temp = prev ->next;
        }
        return head;
    }
};