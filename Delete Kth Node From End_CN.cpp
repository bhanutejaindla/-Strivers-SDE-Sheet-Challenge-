/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node* temp=head;
    Node* ans=temp;
    int count=0;
    while(head!=NULL)
    {
        head=head->next;
        count++;
    }
    int n=count;
    int b=n-K;
    if(b==0)  return temp->next;
    Node* con=NULL;
    while(temp!=NULL)
    {
        if(b==1)
        {
            con=temp->next->next;
            temp->next=NULL;
            break;
        }
        b--;
        temp=temp->next;
    }
    temp->next=con;
    return ans;
}
