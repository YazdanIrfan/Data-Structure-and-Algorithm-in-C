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

// Method 1 : One loop

struct Node* Delete_from_index(struct Node* head, int index){
    

    struct Node* p;
    p =  head;

    for (int i = 0; i != (index-1); i++)
    {
        p = p->next;
    }
    
    p->next = (p->next)->next;

    return head;
    
}

// OR 

// Method 2  : 2 loops

// struct Node* Delete_from_index(struct Node* head, int index){
    

//     struct Node* p;
//     p =  head;

//     struct Node* q;
//     q = head;

//     for (int i = 0; i != (index-1); i++)
//     {
//         p = p->next;
//     }

//     for (int j = 0; j != index; j++)
//     {
//         q = q->next;
//     }
    
    
//     p->next = q->next;

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

    head = Delete_from_index(head, 1);
    // head = insertAtIndex(head , 1567, 3);
    printf("\n");
    printf("Linked List AFTER inserting : \n");
    Traverse(head);
    return 0;
}