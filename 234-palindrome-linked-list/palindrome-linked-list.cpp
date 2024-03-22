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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        vector<int> nums;

        while(temp != NULL) {
            nums.push_back(temp->val);
            temp = temp->next;        
        }

        int n = nums.size();
        for(int i=0 ;i<n/2; i++) {
            if(nums[n - 1 - i] != nums[i])
                return false;
        }
        return true;


    }
};