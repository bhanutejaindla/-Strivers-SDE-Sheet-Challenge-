#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int> *  reverse(LinkedListNode<int> *head)
{
    if(!head) return NULL;
    LinkedListNode<int> * Next=NULL;
    LinkedListNode<int> * prev=NULL;
    while(head!=NULL)
    {
        Next=head->next;
        head->next=prev;
        prev=head;
        head=Next;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(!head)  return true;
    LinkedListNode<int> * slow=head;
    LinkedListNode<int> * fast=head;
    LinkedListNode<int> * node=slow;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    LinkedListNode<int> * temp=reverse(slow);
    slow->next=NULL;
    while(node!=NULL && temp!=NULL)
    {
        if(temp->data!=node->data)  return false;
        temp=temp->next;
        node=node->next;
    }
    return true;
}
