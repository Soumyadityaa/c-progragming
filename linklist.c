#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link ;

};

void insert(struct node **,int );
void delete(struct node **,int );
void addafter(struct node *,int,int );
void addatbeg(struct node **,int );
void display(struct node *);
int count(struct node *);

void insert(struct node **q,int num)
{
    struct node *temp,*r;
    if (*q==NULL)
    {
        temp=malloc(sizeof(struct node));
        temp->data=num;
        temp->link=NULL;
        *q=temp;

    }
    else
    {
        temp=*q;
        while (temp->link!=NULL)
        {
            temp=temp->link;
        }
        r=malloc(sizeof(struct node));
        r->data=num;
        r->link=NULL;
        temp=r->link;

    }
    
    
}

void addatbeg(struct node **q,int num)
{
    struct node *temp;
    temp->data=num;
    temp->link=*q;
    *q=temp;

}

void addafter(struct node *q,int loc,int num)
{
    struct node *temp ,*r;
    int i;
    temp=q;
    for ( i = 0; i < loc; i++)
    {
       temp=temp->link;
        if(temp==NULL)
        {
            printf("less element enter %d",loc);
        }
    }
    r=malloc(sizeof(struct node));
    r->data=num;
    r->link=temp->link;
    temp->link=r;

}

void delete(struct node **q,int num)
{
    struct node *temp,*old;
    temp=*q;
    while (temp!=NULL)
    {
        if (temp->data==num)
       {
           if (temp==*q)
           {
               *q=temp->link;
               printf("first node deleted");
           }
           
            else
          {
              old->link=temp->link;
              free(temp);
             printf("delete node sucessfully");
             return;

         }
        
       }

       else
       {
           old=temp;
           printf("serching .... %d",temp->data);
           temp=temp->link;
       }
       
    }
   printf("%d not found",num); 
}

void display(struct node *q)
{
    printf("\n\n");
    while (q!=NULL)
    {
       printf("%d",q->data);
       q=q->link;
    }
}

int count(struct node *q)
{
   int c=0;
   while (q!=NULL)
   {
       q=q->link;
       c=c+1;

   }
   return c;
}


 void main()
 {
     struct node *p;
     p=NULL;
     printf("\n no. of element is the linked list = %d ",count(p));
     insert(&p,1);
     insert(&p,2);
     insert(&p,3);
     insert(&p,4);
     insert(&p,5);
     insert(&p,6);
     insert(&p,7);
     insert(&p,8);
     display(p);
     getch();

     addatbeg(&p,9);
     addatbeg(&p,10);
     addatbeg(&p,11);
     addatbeg(&p,12);
     display(p);
     getch();

     addafter(p,1,13);
     addafter(p,5,14);
     addafter(p,17,15);
     display(p);

     printf("\n no.element in the linked list =%d",count(p));
     getch();

     delete(&p,13);
     delete(&p,19);
     delete(&p,8);
     display(p);



     printf("\n no.element in the linked list =%d",count(p));
     getch();
     

 }
