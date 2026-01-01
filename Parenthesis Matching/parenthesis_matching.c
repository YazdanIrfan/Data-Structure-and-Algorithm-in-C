#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char* arr;
};

void push(struct stack* s,char* data){
    if (s->top == s->size -1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = data;
    }
}

char* pop( struct stack* s){
    if (s->top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        char* n = s->arr[s->top];
        s->top--;
        return n;
    }
}


int parenthesis(char * exp){
    struct stack* sp;
    sp->size=100;
    sp->top = -1;
    sp->arr = (char*)malloc((sp->size)*sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp,'(');
        }
        else if (exp[i] == ')'){
        
            if (sp->top == -1)
            {
                return 0;
            }
            pop(sp);
        }  
        
        if (sp->top == -1)
        {
            return 1;

        }
        else
        {
            return 0;
        }  
    }  
}



int main (){
    
    char * exp = "((8)(*--$$9))";
    if (parenthesis(exp))
    {
        printf("The parenthesis matches\n");
    }
    else
    {
        printf("Its dosent\n");
    }
    
    
    
    return 0;

}