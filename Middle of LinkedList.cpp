// GFG: https://www.geeksforgeeks.org/write-a-c-function-to-print-the-middle-of-the-linked-list/
// LeetCode: https://leetcode.com/problems/middle-of-the-linked-list/

class Solution {
public:
    ListNode* middleNode(ListNode* head) 
    {
        ListNode *fast = head ;
        ListNode *slow = head ;
        
        // We calculate the Middle of LinkedList in a Single Traversal using Slow & Fast Pointers
      
        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next ;

            fast = fast -> next -> next ;
        }

        return slow ;
    }
};

// Time Complexity:  O(N)
// Space Complexity: O(1)
