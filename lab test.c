#include<stdio.h>

struct node{
    int data;
    struct node *previous;
    struct node *next;

    }
;
int size=0;
struct node *head, *tail= NULL;

void addNode(int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;


    if(head == NULL){
        head = tail = newNode;
        head->previous = NULL;
        tail->next = NULL;
    }
    else{
        tail->next = newNode;
        newNode->previous = tail;
        tail = newNode;
        tail->next = NULL;
     }
     size++;
}
    void deleteFromMid(){
        if(head == NULL){
            return;
            }
        else{
            struct node *current = head;
            int mid = (size%2 == 0)?(size/2):((size+1)/2);
        for(int i = 1; i <= mid; i++){
            current = current->next;
            }
        if(current == head) {
            head = current->next;
            }
            else if(current == tail) {
            tail = tail->previous;
        }
        else {
            current->previous->next = current->next;
            current->next->previous = current->previous;
        }
        current = NULL;
     }
    size--;
    }
    void display(){
    struct node *current = head;
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    while(current != NULL){
    printf("%d ",current->data);
        current = current->next;
        }
    printf("\n");
    }

int main(){
    printf("Enter the values\n= ");
    scanf("%d/n,&addNode");
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);
    addNode(5);
    addNode(6);
    display();
    while(head != NULL) {
        deleteFromMid();
        printf("Updated List: \n");
        display();
    }

    return 0;
}
