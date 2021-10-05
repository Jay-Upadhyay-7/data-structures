#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int q[MAX],front=0,rear=0;
void add_rear();
void add_front();
void delete_rear();
void delete_front();
void display();
int main()
{
int ch;
while(ch!=0)
{
printf("enter 1 for Insert Rear, 2 for insert front, 3 for delete rear, 4 for delete front, 5 for display and 0 for exit: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
       add_rear();
       break;
case 2:
       add_front();
       break;
case 3:
      delete_rear();
       break;
case 4:
       delete_front();
       break;
case 5:
       display();
       break;
case 0:
       break;
default:
printf(" Wrong Choice\n");
}
}
return 0;
}
void add_rear()
{
      int no;
      printf("Enter value to insert : ");
      scanf("%d",&no);
      if(rear==MAX)
       {
          printf(" Queue is Overflow.\n");
          return;
        }
      else
        {
          rear++;
          q[rear]=no;
          if(rear==0)
             rear=1;
          if(front==0)
             front=1;
        }
}
void add_front()
{
       int no;
       printf("Enter value to insert:-");
       scanf("%d",&no);
       if(front<1)
       {
          printf(" Cannot add value at front end\n");
          return;
       }
       else
       {
          front--;
          q[front]=no;
       }
       }
void delete_front()
{
      int no;
      if(front==0)
      {
          printf("Queue is Underflow\n");
          return;
      }
      else
      {
          no=q[front];
          printf("Deleted element is %d\n",no);
          if(front==rear)
          {
            front=0;
            rear=0;
          }
          else
          {
            front++;
          }
      }
}
void delete_rear()
{
      int no;
      if(rear==0)
      {
           printf("Cannot delete value at rear end\n");
           return;
      }
      else
      {
           no=q[rear];
           if(front==rear)
           {
              front=0;
              rear=0;
           }
           else
           {
              rear--;
               printf("Deleted element is %d\n",no);
           }
       }
}
void display()
{
       int i;
       if(front==-1)
       {
           printf("Queue is Underflow\n");
           return;
       }
       else
       {
           printf("Output:\n");
           for(i=front;i<=rear;i++)
           {
              printf(" %d\n",q[i]);
           }
       }
}
