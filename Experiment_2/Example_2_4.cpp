/*Example 4: Insert a node at the end of the list. [Assume the list already has two nodes.]*/
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* constructLL(int arr[], int arrsize)
{
    Node *head = new Node(arr[0]);
    Node *current = head;

    for(int i = 1; i < arrsize; i++)
    {
        Node *temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }
    return head;
}

void traverseLL(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head-> next;
    }
}

Node* insertAtLast(Node* head, int newValue)
{
    Node *temp = head, *current;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    current = new Node(newValue);
    temp->next = current;

    return head;
}

int main()
{
    int arr[4] = {1, 2, 3, 4};
    Node *head = constructLL(arr,4);

    cout<<"Before insertion: ";
    traverseLL(head);


    cout<<"\nAfter insertion: ";
    head = insertAtLast(head, 40);
    traverseLL(head);
}
