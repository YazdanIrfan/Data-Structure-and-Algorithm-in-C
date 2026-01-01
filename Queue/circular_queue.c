#include<stdio.h>
#define maxsize 5 //defining max of the queue
int front = -1; //setting front empty 
int rear = -1; //setting back empty 
int queue[maxsize]; //makng array 

//making insert function
void insert (int item){
    if (front == 0 && rear == maxsize - 1 || front == rear + 1)
    {
        printf("The queue is full\n");
    }
    
    else{
        rear = (rear + 1)%maxsize;
        queue[rear] = item;
        if (front  == -1 )
        {
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
            front = (front + 1) % maxsize;
        }
        return item;
    }
}


//making delete function
void display()
    {
    if (front == -1){
        printf("Queue if empty\n");
    }
    
    /*this condition is for full as well as if front is ahead of rear */
    else if (front < rear)
    {
            for (int i = front; i <= rear; i++)
            {
                printf("The value is : %d\n",queue[i]);
            }   
    }

    //here if the front is after rear or rear is at a lower positin nhan front then we use two loops to break it fom 0 to rear and front to maxsize - 1
    else {
        for (int i = front; i < maxsize; i++)
        {
            printf("The value is : %d \t\n",queue[i]);
        }  

        for (int i = 0; i <= rear; i++)
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
            printf("ENter Data : \n");
            scanf("%d",&item);
            insert(item);
            break;

        case 2 :
            item = delete();
            printf("THe deleted item is %d\n ",item);
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