#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* temp=new Node<int>(0);
     Node<int>* head=temp;
    while(first!=NULL && second!=NULL)
    {
         if(first->data<=second->data)
         {
             temp->next=new Node<int>(first->data);
             temp=temp->next;
             first=first->next;
         }
         else
         {
             temp->next=new Node<int>(second->data);
             temp=temp->next;
             second=second->next;
         }
    }
    while(first!=NULL)
    {
        temp->next=new Node<int>(first->data);
        temp=temp->next;
        first=first->next;
    }
    while(second!=NULL)
    {
        temp->next=new Node<int>(second->data);
        temp=temp->next;
        second=second->next;
    }
    return head->next;
}
