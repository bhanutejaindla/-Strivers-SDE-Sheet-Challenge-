/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
     Node* temp=head;
     Node* temp1=head;
     Node* ans=temp1;
     int count=0;
     while(temp!=NULL)
     {
         count++;
         temp=temp->next;
     }
     if(k%count==0)  return head;
     k=k%count;
     int b=count-k;
     int c=1;
     while(temp1!=NULL)
     {
          if(c==b)
          {
               break;
          }
          c++;
          temp1=temp1->next;
     }
     Node* temp2=temp1->next; 
     temp1->next=NULL;
     if(temp2==NULL)  return head;
     Node* temp3=temp2;
     while(temp2!=NULL && temp2->next!=NULL)
     {
          temp2=temp2->next;
     }
     temp2->next=head;
     return temp3;
}
