/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int l = 0, output = 0;
        ListNode* x = head;
        while(x->next){
          l++;
          x = x->next;
        }
        while(head){
          output += head->val * pow(2,l--);
          head = head->next;
        }
        return output;
    }
};
