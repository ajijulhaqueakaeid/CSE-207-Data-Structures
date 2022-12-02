#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#define SIZE 100

int queue[SIZE];
int size = 0;
int front = 0;
int rear = 0;

void enqueue();
void dequeue();
void displayQueue();
void sizeOfQueue();

int main()
{
    int select;

    while(1)
    {
        printf("............................................\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Items in the queue\n");
        printf("4. Size of the queue\n");
        printf("5. Compress String\n");
        printf("6. Exit\n");
        printf("............................................\n");

        printf("Select your clue: ");
        scanf("%d", &select);

        switch(select)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                displayQueue();
                break;

            case 4:
                sizeOfQueue();
                break;

            case 5:
                compressQueue();
                break;

            case 6:
               printf("\nExited From The Program..!!\n");
               exit(6);

            default:
                printf("Invalid selection!! Please set between (1-5)!!");
                break;
        }
        printf("\n\n");
    }
}

void enqueue()
{
    int temp;

    if(rear == SIZE)
    {
        printf("\nQueue is Full!\n");
    }
    else if(front == 0)
    {
        printf("\nEnqueue Element: ");
        scanf("%d", &temp);
        printf("\ntemp Enqueued To The Queue!!!");

        queue[rear] = temp;
        rear = rear + 1;
    }
}

void dequeue()
{
    if(front == rear)
    {
        printf("\nQueue Is Empty!!!\n");
    }
    else
    {
        printf("\ntemp Dequeued From The Queue Is: %d\n\n", queue[front]);
        front = front + 1;
    }
}

void displayQueue()
{
    if(front == rear)
    {
        printf("\nQueue is Empty!!!\n");
    }
    else
    {
       printf("\ntemp In The Queue... ");

       for(int i=front; i<rear; i++)
       {
           printf("%d ", queue[i]);
       }
       printf("\n\n");
    }
}

void sizeOfQueue()
{
    if (front == rear)
    {
        printf("\nQueue is Empty!!\n");
    }
    else
    {
        printf("\nQueue Size: %d", rear);
    }
}

void compressQueue()
{
    char *alpha[100];
    int count = 0;

    for(int i=0; alpha[i]; i++)
    {
        if(alpha[i] != ' ')
        {
            alpha[count++] = alpha[i];
        }
        alpha[count] = '\0';
    }

    if(front == rear)
    {
        printf("\nQueue is Empty!!!\n");
    }
    else if(front == 0)
    {
        printf("\nCompressed Queue is: ", alpha[count]);
    }

}
