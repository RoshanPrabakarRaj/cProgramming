#include<stdio.h>
//#include<conio.h>
//#include<alloc.h>
#include<stdlib.h>
struct node*find(int);
struct node*findprev(int);
struct node
{
int data;
struct node*next;
}*list=NULL,*P;
void insert(int x);
void del(int x);
void display();

void insert(int x)
{
struct node *newnode;
int position;
newnode=malloc(sizeof(struct node));
newnode->data=x;
if(list==NULL)
{
list=malloc(sizeof(struct node));
list->next=newnode;
newnode->next=NULL;
}
else
{
printf("enter the val after which the data has to be inserted:\n");
scanf("%d",&position);
P=find(position);
newnode->next=P->next;
P->next=newnode;
}
}
struct node *find(int s)
{
P=list->next;
while(P!=NULL&&P->data!=s)
P=P->next;
return P;
}
void del(int x)
{
struct node *temp;
temp=malloc(sizeof(struct node));
P=findprev(x);
if(P->next!=NULL)
{
temp=P->next;
P->next=temp->next;
printf("\n the deleted data is %d",temp->data);
free(temp);
}
else
{
printf("\n data not found\n");
}}
struct node *findprev(int s)
{
P=list;
while(P->next!=NULL&&P->next->data!=s)
P=P->next;
return P;
}
void display()
{
if(list->next==NULL)
printf("list is empty");
else
{
P=list->next;
printf("\n the list contains :\n");
while(P!=NULL)
{
printf("%d->",P->data);
P=P->next;
}
printf("NULL");
}
}
void main()
{
int d,choice;
//clrscr();
printf("\n1.insert\t2.delete\t3.display\t4.exit");
do{
printf("\n enter ur choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the data:");
scanf("%d",&d);
insert(d);
break;
case 2:
printf("enter the data:");
scanf("%d",&d);
del(d);
break;
case 3:
display();
break;
case 4:
exit(0);
}
}while(choice<4);

}


