#include<stdio.h>
#include<stdlib.h>
// creation of linked list data structure 
struct node {
    int data;
    struct node *next;
};
void main(){
    // initation of linked list 
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=11;
    head->next=NULL;


    //print the node of the linked list
    struct node *temp;
    temp=head;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    
    //inserting a data at the beginning of the singly linked list
    struct node *newnode;
    newnode= (struct node*)malloc(sizeof(struct node));
    printf("please enter the data to be add in the beginning: ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
     printf("linked list after adding element at beginning :\n");

    //print the node of the linked list
   
    temp=head;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }


    //insert the element at the end  of the program 
    struct node *trav;
    trav=head;
    while(trav->next != NULL){
        trav=trav->next;
    }
    struct node *newnode2;
    newnode2=(struct node*)malloc(sizeof(struct node));
    trav->next=newnode2;
    printf("please enter the data to be add in the end: ");
    scanf("%d",&newnode2->data);
    newnode2->next=NULL;
    printf("linked list after adding element at end :\n");

    

    //print the node of the linked list
   
    temp=head;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }

    // to add element after an element 
    struct node *find;
    find = head;
    int target;
    printf("please enter the number after which you want to insert the next node ");
    scanf("%d",&target);
    while (find->data != target){
        find=find->next;
    }
    struct node *newnode3;
    newnode3=(struct node*)malloc(sizeof(struct node));
    printf("please enter the data to be add after the target number: ");
    scanf("%d",&newnode3->data);
    newnode3->next = find->next;
    find->next = newnode3;
     printf("linked list after adding element after an element element :\n");

    //print the node of the linked list
   
    temp=head;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }

    // delete the element form the end of the list
    trav=head;
    while(trav->next->next != NULL){
        trav=trav->next;
    }
    struct node *tofree;
    tofree=trav->next;
    trav->next=NULL;
    free(tofree);
    printf("linked list after deletion of last element :\n");

    //print the node of the linked list
   
    temp=head;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }


   // to delete element from beginning 
  
   tofree=head;
   head=head->next;
   tofree->next=NULL;
   free(tofree);
    printf("linked list after deletion of first element :\n");


   
    //print the node of the linked list
   
    temp=head;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }

    //delete the element after the element
    find = head;
    int target1;
    printf("please enter the number after which you want to insert the next node ");
    scanf("%d",&target1);
    while (find->data != target1){
        find=find->next;
    }
    tofree = find->next;
    find->next=find->next->next;
    tofree->next=NULL;
    free(tofree);
     printf("linked list after deletion of  element  after target element :\n");
    
    
    //print the node of the linked list
   
    temp=head;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    // to display linked list in reverse order.
    trav=head;
    while(trav->next != NULL){
        trav=trav->next;
    }
    





}
