/****************************************************************

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

*****************************************************************/

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    int count=0;
    int count1=0;
    Node* temp=firstHead;
    Node* temp1=secondHead;
    while(firstHead!=NULL)
    {
        count++;
        firstHead=firstHead->next;
    }
    while(secondHead!=NULL)
    {
        count1++;
        secondHead=secondHead->next;
    }
    if(count>count1)
    {
        int d=count-count1;
        while(temp!=NULL)
        {
            temp=temp->next;
            d--;
            if(d==0)   break;
        }
    }
     if(count1>count)
    {
        int d=count1-count;
        while(temp1!=NULL)
        {
            temp1=temp1->next;
            d--;
            if(d==0)   break;
        }
    }
    while(temp!=NULL && temp1!=NULL)
    {
        if(temp==temp1)  
        {
            break;
        }
        temp=temp->next;
        temp1=temp1->next;
    }
    return temp;
}
