/*Practice Exercise:3. Write a C++ program to delete the first node of a Singly Linked List.*/
#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *constructLL(int arr[], int arrsize)
{
    Node *head = new Node(arr[0]);
    Node *current = head;

    for(int i = 1; i<arrsize; i++)
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

Node *Delete_From_First(Node *head)
{
    if(head == NULL)
    {
        cout<<"The list is empty";
    }
    Node *temp = head->next;
    head->next = NULL;
    return temp;
}

int main()
{
    int arr[] = {41, 42, 43, 44, 45};
    Node* head;
    head = constructLL(arr, 5);

    cout<<"Traversed link list: ";
    traverseLL(head);

    cout<<"\nAfter deletion: ";
    head = Delete_From_First(head);
    traverseLL(head);
    return 0;
}
