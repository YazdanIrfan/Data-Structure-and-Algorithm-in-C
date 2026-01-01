#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};


void Traverse(struct Node* ptr){
    while (ptr != NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
    
}


struct Node* remove_from_first(struct Node* head){
    
    head = head->next;
    
    return head;
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
    frth->next = NULL; 
    
    printf("Linked List BEFORE inserting : \n");
    Traverse(head);

    head = remove_from_first(head);
    printf("\n");
    printf("Linked List AFTER inserting : \n");
    Traverse(head);

    return 0;
}