#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 20

int queue2[SIZE];

void menu();
void enQueue(int);
void deQueue();
void copy();
void display();

int queue[SIZE], front = -1, rear = -1;

int main()
{
   int value, select;

   while(1){

      menu();
      printf("\nEnter your choice: ");
      scanf("%d",&select);

      switch(select)
        {

	      case 1: printf("Enter the value to be insert: ");
		   scanf("%d",&value);
		   enQueue(value);
		   break;

	      case 2: deQueue();
		   break;

          case 3: copy();
           break;

	      case 4: display();
		   break;

	      case 5: exit(0);

	      default: printf("\n Invalid selection! Try again!");
      }
   }
}

void menu()
    {

 printf("1. Insertion\n");
 printf("2. Deletion\n");
 printf("3. Copy to another queue\n");
 printf("4. Display\n");
 printf("5. Exit");

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

void copy(){

    int i;
    for(i=front; i<rear; i++){

        queue2[i] = queue[i];

    }
    printf("\nCopy success!\n");
    printf("Copied values are: ");
    display();
}
void display(){
   if(rear == -1)
      printf("\nQueue is Empty!!!");
   else{
      int i;
      printf("\nQueue elements are:\n");
      for(i=front; i<=rear; i++)
	  printf("%d\t",queue[i]);
   }
}
