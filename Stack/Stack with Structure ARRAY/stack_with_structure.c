#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int* arr;
};


int isFull(struct stack* s){
    if((s->top) == (s->size - 1)){
        return 1;
    }

    else
    {
        return 0;
    } 
}

// void isFull(struct stack* s){
//     if((s->top) == (s->size - 1)){
//         printf("The stack is FULL\n");
//     }

//     else
//     {
//         printf("The stack is NOT FULL\n");
//     } 
// }

int isEmpty(struct stack* s){
    if (s->top == -1)
    {
        return 1;
    }
    
    else
    {
        return 0;
    }  
}

// void isEmpty(struct stack* s){
//     if (s->top == -1)
//     {
//         printf("The stack is EMPTY\n");
//     }
    
//     else
//     {
//         printf("The stack is NOT EMPTY\n");
//     }  
// }

int main(){
    
    struct stack* sp;
    sp->size = 80;
    sp->top = -1;
    sp->arr = (int*)malloc(sizeof(int));


    isEmpty(sp);
    isFull(sp);


    // Placing an element in array manually 
    // sp->arr[0] = 324;
    // sp->top++;

    
    printf("%d\n",isEmpty(sp));
    printf("%d\n",isFull(sp));
    return 0;
}