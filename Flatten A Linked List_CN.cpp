/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
#include<bits/stdc++.h>
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	Node* temp=new Node(0);
	temp->next=NULL;
	temp->child=NULL;
	Node* temp1=temp;
	vector<int>ans;
	while(head!=NULL)
	{
		Node* curr=head;
		while(curr!=NULL)
		{
		ans.push_back(curr->data);
		curr=curr->child;
		}
		head=head->next;
	}
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++)
	{
		temp->child=new Node(ans[i]);
		temp=temp->child;
	}
	return temp1->child;
}
