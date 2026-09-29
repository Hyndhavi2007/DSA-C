#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
 struct node *head = NULL;
void insert(int value){
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Memory allocation failed");
        return;
    }
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}
void insertMiddle(int position , int value){
    struct node *newnode;
    struct node *temp;
    newnode = malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("memory allocation failed\n");
        return;
    }
    newnode->data = value;
    temp = head;
    temp = temp->next;
    newnode->next = temp->next;
    temp->next = newnode;
}
void insertEnd(int value){
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    struct node *temp;
    newnode -> data = value;
    newnode ->next= NULL;
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}
void deleteBeginning(){
    struct node *temp;
    temp = head;
    head = head->next;
    free(temp);
}
void deleteMiddle(int position){
    struct node *temp;
    struct node *deletenode;
    temp = head;
    for(int i = 0; i< position -1; i++){
        temp = temp->next;
    }
    deletenode = temp->next;
    temp->next = deletenode->next;
    free(deletenode);
}
void deleteEnd(){
    struct node *temp = head;
    struct node *deletenode;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    deletenode = temp->next;
    temp->next = deletenode->next;
    free(deletenode);
}
int countNode(){
    int count = 0;
    struct node *temp;
    temp = head;
    while(temp != NULL){
        count++;
        temp = temp-> next;
    }
    return count;
}
void update(int position, int value){
    struct node *temp = head;
    for(int i = 0; i<position -1; i++){
        if(temp == NULL){
            printf("invalid position\n");
            return;
        }
        temp = temp->next;
    }
    if(temp == NULL){
        printf("Invalid\n");
        return;
    }
    temp->data = value;

}
void search(int value){
    struct node *temp;
    temp = head;
     int position = 0;
    while(temp != NULL){
        if(temp->data == value){
            printf("%d %d", position, value);
            return;
        }
        temp = temp->next;
        position++;
    }
    printf("not found %d", value);

}
void display(){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main(){
    printf("Inserting elements");
    insert(100);
    insert(20);
    insert(10);
    insertMiddle(2,130);
    insertEnd(190);
    insertEnd(180);
    display();
    deleteBeginning();
    deleteMiddle(2);
    deleteEnd();
    update(2,1900); 
    display();
    printf("the count node is %d\n" ,countNode());
    search(1900);
    return 0;
}