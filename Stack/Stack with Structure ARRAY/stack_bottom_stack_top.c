#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int* arr;
};




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



int isFull(struct stack* s){
    if((s->top) == ((s->size) - 1)){
        return 1;
    }

    else
    {
        return 0;
    } 
}

void push(struct stack* s, int data){
    if ((s->top) == ((s->size) - 1))
    {
        printf("Stack Overflow! , Could Not push element\n");
    }
    
    else{
        s->top++;
        s->arr[s->top] = data;
        printf("Element was succesfully pushed into the stack!\n");
    }
}

int pop(struct stack* s){
    if (s->top == -1)
    {
        printf("Stack Underflow , No elemnt was popped\n");
    }
    
    else
    {
        int element = s->arr[s->top];
        s->top--;
        return element;
    
    }
}

int peak(struct stack* s){
    if (s->top == -1)
    {
        printf("No elemnt, Stack is empty\n");
    }
    
    else
    {
        int j = 0;
        while (j <= s->top)
        {
            int n = s->arr[j];
            printf("The element at %d is %d\n",j,n);
            j++;
        }
    }
}

int stack_bottom(struct stack* s){
    return(s->arr[0]);
}

int stack_top(struct stack* s){
    return(s->arr[s->top]);
}

int main(){
    
    struct stack* sp;
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int*)malloc((sp->size) * (sizeof(int)));


    
    

    // Placing an element in array manually 
    // sp->arr[0] = 324;
    // sp->top++;

    // Pushing an element by the push fuunction
    push(sp,324);
    push(sp,34);
    push(sp,364);
    // push(sp,4);
    // push(sp,3);
    // push(sp,35467);
    
    peak(sp);

// poping from the stack
    int a = pop(sp);
    printf("%d was poped\n",a);
    // int b = pop(sp);
    // printf("%d was poped\n",b);
    // int c = pop(sp);
    // printf("%d was poped\n",c);
    // int d = pop(sp);
    // printf("%d was poped\n",d);
    // int e = pop(sp);
    // printf("%d was poped\n",e);
    // int f = pop(sp);
    // printf("%d was poped\n",f);
    


    peak(sp);

    printf("Stack Top : %d\n",stack_top(sp));
    printf("Stack Bottom : %d\n",stack_bottom(sp));
    return 0;
}