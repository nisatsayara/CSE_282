/*Example 3: Insert a node at the beginning of the list.*/
#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
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
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* insertAtFirst(Node* head, int newValue)
{
    Node* current = NULL;
    if(head == NULL)
    {
        current = new Node(newValue);
        head = current;
        return head;
    }
    current = new Node(newValue);
    current->next = head;
    head = current;

    return head;
}

int main()
{
    int arr[8] = {2, 4, 5, 6};
    Node *head = constructLL(arr,4);
    head = insertAtFirst(head, 50);
    traverseLL(head);
}
