// GFG: https://www.geeksforgeeks.org/reverse-a-linked-list/
// LeetCode: https://leetcode.com/problems/middle-of-the-linked-list/

class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        // We reverse the LinkedList in one go using 3-Pointers
      
        ListNode *curr = head ; // Helps in iterating over the LinkedList

        ListNode *prev = NULL ; // Points to the Prev-Node of Curr

        ListNode *last = NULL ; // Points to the Prev-Node of Prev

        while(curr != NULL)
        {
            // Firstly, we make last move to prev , prev to curr, and curr to curr -> next
          
            last = prev ;

            prev = curr ;

            curr = curr -> next ;

            prev -> next = last ; // We reverse the Link by making prev -> next point to Last

        }

        return prev ; // At the end, prev will contain the Head of the Reversed LinkedList    
    }
};

// Time Complexity:  O(N)
// Space Complexity: O(1)
