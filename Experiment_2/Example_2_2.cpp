/*Example 2: Create a linked list from an array and return the head.*/
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
        cout<<head->data<<endl;
        head = head->next;
    }
}

int main()
{
    int arr[4] = {10, 20, 30, 40};
    Node *head = constructLL(arr, 4);
    traverseLL(head);
}
