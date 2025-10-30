class Solution {
    public ListNode reverseList(ListNode head) {
        // Base case: empty list or single node
        if (head == null || head.next == null) return head;

        // Recursive step
        ListNode newHead = reverseList(head.next);
        
        // Reverse the link
        head.next.next = head;
        head.next = null;

        return newHead;
    }
}
