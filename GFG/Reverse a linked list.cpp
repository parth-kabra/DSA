/*
https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1/?company[]=Amazon&company[]=Microsoft&company[]=Amazon&company[]=Microsoft&problemStatus=unsolved&problemType=functional&difficulty[]=0&page=1&sortBy=submissions&query=company[]Amazoncompany[]MicrosoftproblemStatusunsolvedproblemTypefunctionaldifficulty[]0page1sortBysubmissionscompany[]Amazoncompany[]Microsoft
*/


// { Driver Code Starts
//Initial Template for C++// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};



 // } Driver Code Ends
/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
    	Node* pre=NULL;
    	Node* curr=head;
    	Node* nn;
    	while(curr!=NULL){
    		nn=curr->next;
    		curr->next=pre;
    
    		pre=curr;
    		curr=nn;
    	}
    	return pre;
    }
    
};
    


// { Driver Code Starts.

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        Solution ob;
        head = ob. reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}

  // } Driver Code Ends
