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
    ListNode* reverseList(ListNode* &prev, ListNode* &curr){
        //base case
        if(curr == NULL){
            //iska mtlb reverse ho chuka haii
            //reversed LL k starting node pr prev wala pointer haii
            return prev;
        }
        //1 case ham solve karenge
        ListNode* forward = curr->next;
        //currt node ko pichhe ki disha me point karwaya
        curr->next = prev;
        //pointert ko 1 step age badhaya and recurssion ko pakkda dia aage solve karne ke liye 
        prev = curr;
        curr = forward;
        //baki recursion sambhal lega 
        return reverseList(prev, curr);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        ListNode* newHead = reverseList(prev, curr);
        return newHead;
    }
};