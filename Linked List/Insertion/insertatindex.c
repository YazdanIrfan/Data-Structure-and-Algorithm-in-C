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

struct Node* insertatindex(struct Node* head, int index, int data){
    struct Node* ptr;
    ptr = (struct Node* )malloc(sizeof(struct Node*));

    struct Node* p;
    p =  head;

    for (int i = 0; i != (index-1); i++)
    {
        p = p->next;
    }
    ptr->data = data;
    
    ptr->next = p->next;
    p->next = ptr;
    return head;
    
}

// // Case 2
// struct Node * insertAtIndex(struct Node *head, int data, int index){
//     struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
//     struct Node * p = head;
//     int i = 0;
 
//     while (i!=index-1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }



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

    head = insertatindex(head, 3 , 786);
    // head = insertAtIndex(head , 1567, 3);
    printf("\n");
    printf("Linked List AFTER inserting : \n");
    Traverse(head);
    return 0;
}