#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
void printList(struct Node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}
void searchelement(int tem,struct Node* n)
{
    int index=0;
    while(n!=NULL){
        if(tem == n->data){
            printf("the %d is in index %d",tem,index);
            }
            n=n->next;
            index++;
        }

}
void insert_in_start(int data,struct Node** head){
    struct Node* temp;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = (*head);
    (*head) = newNode;
}


void insertPosition(int pos, int data, struct Node** head)
{
        int i=1;
        struct Node* temp = *head;
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;
        if(pos==1)insert_in_start(data,head);
        else{
            while(i<pos-1)
            {
                temp=temp->next;
                i++;
            }

            newNode->next= temp->next;

            temp->next = newNode;
        }

}
void delete(int pos,struct Node** head){
     struct Node *temp = *head, *prev;

      if (temp != NULL && temp->data == pos) {
      *head = temp->next;
      free(temp);
      return;
      }
        int i=1;
      while (temp != NULL && i<pos) {
      prev = temp;
      temp = temp->next;
      i++;
      }


      if (temp == NULL) return;


      prev->next = temp->next;

      free(temp);

}



int main(){
    int choice,num,data;
    struct Node* head=NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    scanf("%d",&head->data);
    head->next=second;
    scanf("%d",&second->data);
    second->next=third;
    scanf("%d",&third->data);
    third->next=NULL;
    printList(head);
    printf("\n\n\n\nenter your choice which operation you want to perform\n1.is for to search an element\n2.to insert a element\n3.to delete an element\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        printf("\nenter the number you want to search:");
        scanf("%d",&num);
        searchelement(num,head);
        break;
    case 2:
        printf("\nenter the data u want to insert");
        scanf("%d",&data);
        printf("\nenter the position");
        scanf("%d",&num);
        printf("\nthe list after the insertion is ");
        insertPosition(num,data,&head);
        break;
    case 3:
        printf("\nenter the potion you want to delete");
        scanf("%d",&num);
        delete(num,&head);

    }
    printList(head);
    return 0;
}
