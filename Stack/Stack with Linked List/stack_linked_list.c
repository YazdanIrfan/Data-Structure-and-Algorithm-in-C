# include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node* next;
};


struct Node* create_Node(int data){
    

    struct Node* n;
    n = (struct Node*)malloc(sizeof(struct Node));
    
    n->data = data;
    n->next = NULL;

    return n;
}

struct Node* push(struct Node* top, int data){
    if (create_Node(data)== NULL)
    {
        printf("Stack Overflow , Element was not inserted");
    }
    
    else
    {
        struct Node* n = create_Node(data);
        n->next = top;
        top = n;
        printf("Element was succesfully pushed into the stack");
        return n;
    }
}

int pop(struct Node** top){
    if (*top = NULL)
    {
        printf("Stack underflow,  No element was poped");
    }
    else
    {
        struct Node* n= *top;
        *top = (*top)->next;
        int x = (*top)->data;
        free(*top);
        // printf("Element was succesfully poped from the stack");
        return x;
    }
}







int main(){

    struct Node* top = create_Node(345345);
    top = push(top , 68);

    pop(&top);


    return 0;
}