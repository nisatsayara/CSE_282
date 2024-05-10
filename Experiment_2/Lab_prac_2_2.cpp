/*Practice Exercise:2. Write a C++ program to find the length of a singly linked list.*/
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

int lengthLL(Node *head)
{
    Node *temp = head;
    int count = 0;
    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

int main()
{
    int arr[] = {41, 42, 43, 44, 45};
    Node* head;
    head = constructLL(arr, 5);

    cout<<"Traversed link list: ";
    traverseLL(head);

    cout<<"\nLength of the linked list = ";
    cout<<lengthLL(head);

    return 0;
}
