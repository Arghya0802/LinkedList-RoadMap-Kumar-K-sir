// Link: https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1

// Recurisve function to count Nodes in a LinkedList

int countLinkedListNodes(Node *p)
{
        if(p == NULL) // Base Case
            return 0 ;
            
        return 1 + countLinkedListNodes(p -> next) ;
}


int getCount(struct Node* head)
{
        int ans = 0 ; 
        
        Node * p = head ;
        
        while(p != NULL) // We keep on counting all the nodes until P becomes NULL
        {
            ans += 1 ;
            
            p = p -> next ;
        }
        
        return ans ;
}

// For the Iterative Code
// Time Complexity:  O(N)
// Space Complexity: O(1)

// For the Recurisve Code
// Time Complexity:  O(N)
// Space Complexity: O(N) [Recursive Stack Space]
