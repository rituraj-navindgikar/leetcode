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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count = 0;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* tempb;

        while(count != a-1){
            temp1 = temp1->next;
            count++;
        }   
        tempb = temp1;
        while(count != b+1) {
            tempb = tempb->next;
            count++;
        }
        temp1->next = temp2;
        while(temp2->next != NULL) {
            temp2 = temp2->next;
        }
        temp2->next = tempb;
        return list1;
    }
};