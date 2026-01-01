#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};


void Traverse(struct Node* head){
    struct Node* ptr = head;
    
    do
    {
        printf("The Element is : %d \n",ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}


int main(){
    struct Node* head;
    struct Node* snd;
    struct Node* trd;
    struct Node* frth;

    head = (struct Node*)malloc(sizeof(struct Node));
    snd = (struct Node*)malloc(sizeof(struct Node));
    trd = (struct Node*)malloc(sizeof(struct Node));
    frth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = snd;

    snd->data = 642;
    snd->next = trd;

    trd->data = 584;
    trd->next = frth;

    frth->data = 878;
    frth->next = head; //<-- Here we are circularing it to head
    //The last element point at the memory location of the head 
    //In a circular linked list there is a head node but no starting node

    Traverse(head);

    return 0;
}