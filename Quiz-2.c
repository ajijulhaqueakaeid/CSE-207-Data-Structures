#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 10

void menu();
void enQueue(int);
void deQueue();
void display();

int queue[SIZE], front = -1, rear = -1,queue2[SIZE];

int main()
{
   int value, select;
   while(1){

      menu();
      printf("\nEnter your choice: ");
      scanf("%d",&select);

      switch(select){

	      case 1: printf("Enter the value to be insert: ");
		   scanf("%d",&value);
		   enQueue(value);
		   break;

	      case 2: deQueue();
		   break;

	      case 3: display();
		   break;

            case 4: oddtoevn();
		   break;


	      case 0:exit(0);

	      default: printf("\n Invalid selection! Try again!");
      }
   }
}

void menu()
    {

 printf("\n1. Insertion\n");
 printf("2. Delation\n");
 printf("3. Display\n");
 printf("4. ODD to Even")
 printf("0. Exit\n\n");

}
void enQueue(int value)
    {
   if(rear == SIZE-1)
      printf("\nQueue is Full!!! Insertion is not possible!!!");
   else{
      if(front == -1)
	  front = 0;
      rear++;
      queue[rear] = value;
      printf("\nInsertion success!!!");
   }
}
void deQueue()
    {
   if(front == rear)
      printf("\nQueue is Empty!!! Deletion is not possible!!!");
   else{
      printf("\nDeleted : %d", queue[front]);
      front++;
      if(front == rear)
	 front = rear = -1;
   }
}
void oddtoevn(){

    int i,h=rear;
    for(i=front; i<rear; i++){
        if(queue[i]%2!=0)
        {
            queue2[i] = queue[i];
            i=i-1;
        }
        else
        {
         queue2[h] = queue[i];
         h=h-1;
        }

    }
    printf("\nCopy success!\n");
    printf("Copied values are: ");
    display();
}
void display()
    {
   if(rear == -1)
      printf("\nQueue is Empty!!!");
   else{
      int i;
      printf("\nQueue elements are:\n");
      for(i=front; i<=rear; i++)
	  printf("%d ",queue2[i]);
	  printf("\n\n");

   }
}
