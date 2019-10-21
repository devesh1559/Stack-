#include<stdio.h>
#include<stdio.h>
#define max 4
int t=-1;
int a[max];
int x;
void push()
{
	
	if(t==max-1)
	{
		printf("stack is full");
	}
	else
	{
		t++;
		a[t]=x;
		
	}
	
}
void pop()
{
	
	if(t==-1)
	{
		printf("Stack is empty");
		
	}
	else
	{
		
		printf("%d",a[t]);
		
		t--;
	}
}
void display()
{
	int i;
	if(t==-1)
	{
		printf("\nStack is empty");
	}
	else
	{
	
	for(i=t;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}
}
main()
{
	int c;
	
	while(1)
	{
	
		printf("\nEnter Your choice\n1Push\n2Pop\n3Display\n4Exit-->");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				{
					printf("\nEnter the number-->");
					scanf("%d",&x);
					push(x);
					break;
				}
				case 2:
					{
						pop();
						break;
					}
					case 3:
						{
							display();
							break;
						}
						case 4:
							{
								exit(0);
								break;
							}
		}
	}
}

