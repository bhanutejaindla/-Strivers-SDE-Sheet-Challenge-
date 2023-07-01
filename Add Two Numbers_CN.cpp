/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    if(num1==NULL)  return num2;
    if(num2==NULL)  return num1;
    int carry=0;
    Node* temp=new Node(0);
    Node* head=temp;
    while(num1!=NULL && num2!=NULL)
    {
      int sum=carry+num1->data+num2->data;
       if(sum<=9)
       {
             temp->next=new Node(sum);
             temp=temp->next;
             carry=0;
       }
       else if(sum>=10)
       {
            int a=sum%10;
            temp->next=new Node(a);
            temp=temp->next;
            carry=sum/10;
       }
       num1=num1->next;
       num2=num2->next;
    }
    while(num1!=NULL)
    {
       int sum=carry+num1->data;
       if(sum<=9)
       {
             temp->next=new Node(sum);
             temp=temp->next;
             carry=0;
       }
       else if(sum>=10)
       {
            int a=sum%10;
            temp->next=new Node(a);
            temp=temp->next;
            carry=sum/10;
       }
       num1=num1->next;
    } 
    while(num2!=NULL)
    {
       int sum=carry+num2->data;
        if(sum<=9)
       {
             temp->next=new Node(sum);
             temp=temp->next;
             carry=0;
        } else if (sum >= 10) {
          int a = sum % 10;
          temp->next = new Node(a);
          temp = temp->next;
          carry = sum / 10;
        }
        num2 = num2->next;
    }
    if (carry != 0)
    {
       temp->next=new Node(carry);
       temp=temp->next;
    }
    return head->next;

}
