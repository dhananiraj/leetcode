/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
      if(l1 == null){
        return l2;
      }
      if(l2 == null){
        return l1;
      }
      ListNode output=null,current=null,newNode=null;  
      int carry = 0;
      while(l1 != null || l2 != null || carry != 0){
        int total = carry;
        if(l1 != null && l2 != null){
          total += l1.val + l2.val;
          l1 = l1.next;
          l2 = l2.next;
        } else if(l1 == null && l2 != null){
          total += l2.val;
          l2 = l2.next;
        } else if(l2 == null && l1 != null){
          total += l1.val;
          l1 = l1.next;
        } 
        
        if(total > 9){
          total-=10;
          carry = 1;
        } else {
          carry = 0;
        }
        
        newNode = new ListNode(total);
        
        if(output == null){
          current = output = newNode;
          
        } else {
          current.next = newNode;
          current = newNode;
        }
      }
      return output;
    }
}
