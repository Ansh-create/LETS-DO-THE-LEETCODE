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
       ListNode* ans = new ListNode(0);
        ListNode* currNode = ans;
        while(list1!=NULL && list2!=NULL) {
            if(list1->val <= list2->val) {
                currNode->next = list1;
                list1 = list1->next;
                currNode = currNode->next;
            } else {
                currNode->next = list2;
                list2 = list2->next;
                currNode = currNode->next;
            }
        }
        if(list1!=NULL) {
            currNode->next=list1;
        }
        if(list2!=NULL) {
            currNode->next=list2;
        }
        return ans->next;
    }
};