#include<stdio.h>
#include<stdlib.h>
int i=1;
int n=5;
struct Node{
    int data;
    struct Node *next;
}*head,*last;
void push(){
    struct Node *newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    if(i==1){
        printf("\nenter the first data for stack =");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        head=newnode;
        i++;
    }
    else if(i<=5){
        printf("\nthe middle data for stack =");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
        i++;
    }
    else printf("\nstack is overflowing");
}
void pop(){
    struct Node *tem;
    if(i==1)printf("\nstack is empty");
    else{
        tem=head;
        head=head->next;
        free(tem);
        printf("\nHead is poped");
        i=i-1;
    }
}
void display(){
    struct Node *tem;
    tem=head;
    if(head==NULL)printf("\nstack is empty");
    else{
        while (tem!=NULL)
        {
            printf("\nthe data is %d",tem->data);
            tem=tem->next;
        }
        
    }
}
void display_head(){
    if(head==NULL)printf("\nstack is empty\n");
    else printf("\nthe head of stack is %d\n",head->data);
}
int main(){
    int choice;
    do{
        printf("\n\tOperation to perform in Stack\n");
        printf("\n1.push");
        printf("\n2.pop");
        printf("\n3.display");
        printf("\n4.display the head");
        printf("\n5.exit");
        printf("\nEnter your choice =");
        scanf("%d",&choice);
        if(choice==1)push();
        else if(choice==2)pop();
        else if(choice==3)display();
        else if(choice==4)display_head();
        else printf("\n\n\n\tInvaid Entery");
    }
    while(choice!=5);
    return 0;
}