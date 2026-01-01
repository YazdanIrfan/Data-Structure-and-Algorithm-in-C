#include<stdio.h>
#define maxsize 5 //defining max of the queue
int front = -1; //setting front empty 
int rear = -1; //setting back empty 
int queue[maxsize]; //makng array 

//making insert function
void insert (int item){
    if (rear >= maxsize -1 ){
        printf("The queu is full\n");
    }

    else{
        rear++;
        queue[rear] = item;
        if (front  == -1 ){
            front = 0;
        }
    }
}

//making delete function
int delete(){
    if (front == -1 ){
        printf("Queue is empty\n");
        return 0; 
    }
    else {
        int item = queue[front];
        if (front == rear){
            front = rear = -1;

        }

        else{
            front++;
        }
        return item;
    }
}

//making delete function
void display(){
    if (front == -1){
        printf("Queue if empty\n");
    }

    else {
        for (int i = front; i <= rear; i++)
        {
            printf("The value is : %d \t\n",queue[i]);
        } 
    }
}

//main body of the code
int main(){
    int choise,item,loop = 1;

    while (loop)
    {
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choise : ");
        scanf("%d",&choise);

        switch (choise)
        {
        case 1:
            printf("Enter Data : ");
            scanf("%d",&item);
            insert(item);
            break;

        case 2 :
            item = delete();
            printf("The deleted item is %d\n ",item);
            break;

        case 3 :
            display();
            break;

        case 4 :
            loop = 0;
            break;

        default:
            printf("Invalid choise\n");
            break;
        }
    }
}