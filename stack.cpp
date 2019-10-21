#include<stdio.h>
#define MAX 4
int a[MAX];
int i;
int front=-1;
int rear=-1;
void enqueue(int x)
{
	if(rear==MAX-1)
	{
		printf("queue is full");
	}
	else
	{
		rear++;
		a[rear]=x;
	
	}
}

void dequeue()
{
	if(front==-1&&front>rear)
	{
		printf("queue empty");
	}
	else
	{
			a[front]=0;
		front++
		;
	
	}
}
void display()
{
	for(i=0;i<=rear;i++)
	{
		printf("%d\n",a[i]);
	}
}
int main()
{
	int f;
	int c;
	while(1)
	{
	printf("Enter choice");
	printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
		{
			printf("Enter element to be insterted\n");
			int d;
			scanf("%d",&d);
			enqueue(d);
			break;
		}
	case 2:
	{
		dequeue();
		printf("dequeue success");
		break;
	}
	case 3:
	{
		display();
		break;
	}
	case 4:
	{
		f=1;
		break;
	}	
	
}
if (f==1)
break;
}
}
