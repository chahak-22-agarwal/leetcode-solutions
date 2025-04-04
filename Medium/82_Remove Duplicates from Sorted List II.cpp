/*Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.

 

Example 1:


Input: head = [1,2,3,3,4,4,5]
Output: [1,2,5]
Example 2:


Input: head = [1,1,1,2,3]
Output: [2,3]
 */
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
     if (!head || !head->next) return head;
     ListNode* dummy= new ListNode(0);//dynamic allocation
     dummy->next=head;
     ListNode* prev=dummy;
     ListNode* current=head;
     while (current){
        bool isduplicate=false;//initially set to false
        while (current->next &&
        current->val==current->next->val){
            isduplicate=true;
            ListNode* duplicate =current->next;
            current->next=duplicate->next;
            delete duplicate;
        }
        if (isduplicate){
            prev->next=current->next;
            delete current;
        }
        else {
            prev=current;
        }
        current=prev->next;
     }
     head=dummy->next;
     delete dummy;
     return head;
    }
};
