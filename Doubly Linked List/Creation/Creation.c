#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node* prev; //Pointer Pointing at the previous Node 
    int data;
    struct Node* next;//Pointer pointing to the next Node
};

void Trverse_forward(struct Node* head){

    struct Node* p;
    p = head->next;
    while (p != NULL)
    {
        printf("The Element is : %d \n", p->data);
        p = p->next;
    }
}

void Traverse_backward(struct Node* head){

    struct Node* p;
    p = head->next;

    while (p->next != NULL)
    {
        printf("The element In reverse is : %d \n",p->data);
        p = p->prev;
    }
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


    head->prev = NULL;
    head->data = 45;
    head->next = snd;

    snd->prev = head;
    snd->data = 345;
    snd->next = trd;

    trd->prev = snd;
    trd->data = 657;
    trd->next = frth;

    frth->prev = trd;
    frth->data = 2348;
    frth->next = NULL;


    printf("Traversal in Forward Direction : \n");
    Trverse_forward(head);
    printf("\n");
    Traverse_backward(frth);


    return 0;
}