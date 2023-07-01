LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> * prev=NULL;
    LinkedListNode<int> * Next=NULL;
    LinkedListNode<int> * cur=head;
    while(head!=NULL)
    {
        Next=head->next;
        head->next=prev;
        prev=head;
        head=Next;
    }
    return prev;
}
