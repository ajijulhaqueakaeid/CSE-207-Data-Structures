#include <stdio.h>
#include <stdlib.h>
#include<process.h>
#include<limits.h>
#define SIZE 200
#define MAX 200

int item = -1, stack[MAX], queue[MAX];

int front = 0;
int rear = 0;

void push();
void pop();
void displayStack();

void enqueue(int temp)
{

    if(rear == MAX)
    {
        printf("Queue is Full!\n");
    }
    else if (front == 0)
    {

        queue[rear] = temp;
        rear = rear + 1;
    }
}

void stackToQueue(){
    for (int i=item; i>=0; --i)
    {
        enqueue(stack[i]);
    }

}
void displayQueue()
{
    if (front == rear)
    {
        printf("\nQueue is empty!!");
    }
    else
    {
        printf("temp in Queue..\n\n");

        for (int i=front; i<rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    printf("Total number: ");
    int n, i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        push();

    stackToQueue();
    displayQueue();
}

void push()
{
    int data;

    if(item == MAX-1)
    {
        printf("\nStack is full!!!");
    }
    else
    {

        scanf("%d", &data);

        item = item + 1;
        stack[item] = data;
    }
}

void pop()
{
    if (item == -1)
    {
        printf("\nStack is empty!");
    }
    else
    {
        printf("\nDeleted element is %d", stack[item]);
        item = item - 1;
    }
}

void displayStack()
{
    if(item == -1)
    {
        printf("\nStack is empty!");
    }
    else
    {
        printf("\nStack is : \n");

        for (int i=item; i>=0; --i)
        {
            printf("%d\n", stack[i]);
        }
    }
}
