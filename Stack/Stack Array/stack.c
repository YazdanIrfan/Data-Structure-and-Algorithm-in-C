#include<stdio.h> //importing the library
#define maxsize 5 //using the defining function to give maxsize value 5
int stack [maxsize]; //makng an array stack
int top=-1; //assigning the top at -1

void push (int item){ //making the push func
    if (top>=maxsize-1){              //checking and printing if the stack is full 
        printf("The stack is full\n");
    }

    else
    {
        top++;      //else it will increment the top from top = -1 to top  = 0 and so on as we try to push an elecmemt 
        stack[top]=item; //here the element is being pushed into the stack after the top is incremented 
    }
}

int pop() //making  the pop function 
{
    if (top<0) //checking and printing weather the stack is already empty
    { 
        printf("the stack is empty\n");
        return 0;
    }

    else
    { 
        int item=stack[top]; //the element will be removed at the position where the top was present 
        top=top-1; //and after removing the element the top will shift to a lower index by 1
        return item;
    }
}

void display() //Display Function for stack
{
    if (top<0) //cheching and printing if the stack is empty  
    {
        printf("The stack is empty\n");
    }
    

    else{ //else here we run a for loop till the final position till where the top is present and print all the element
        for (int i=0; i<=top; i++)
        {
            printf("The elements are : %d \n",stack[i]);
        }   
    }

}
int main(){
    int choice, item;
    while(1) //Using an infinite while loop to keep the options printing until the exit option is selected 
    {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n"); //giving user choice 

        printf("Enter your choice : "); //taking input from user 
        scanf("%d",&choice);

        switch (choice) //using switch case to call functions based on user input 
        {
            case 1: printf("Enter an item : ");
                    scanf("%d",&item);
                    push(item); //calling push func to push an element into the stack
                    break;
            case 2: printf("Item thats has been removed is : %d\n",pop()); //calling the pop func and printing the poped element
                    break;
            case 3: display(); //calling the display function to show the elemnts in the stack 
                    break;
            case 4: return 0; //exiting the while loop
            default: printf("Invalid Choise\n");
        }
    }
}