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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res;
        ListNode*curr1=list1;
        ListNode*curr2=list2;
        if(!list1&&list2)return list2;
        else if(list1&&!list2)return list1;
        else if(!list1&&!list2)return list1;

        if(curr1->val<curr2->val){res=curr1;curr1=curr1->next;}
        else {res=curr2;curr2=curr2->next;}
        ListNode*head=res;
        while(curr1||curr2){
            if(!curr2||curr1&&curr1->val<curr2->val){
                res->next=curr1;
                res=res->next;
                curr1=curr1->next;
            }
            else {
                res->next=curr2;
                res=res->next;
                curr2=curr2->next;
            }
        }
        return head;;
    }
};
