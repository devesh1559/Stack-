# Stack
## AIM
Implementation of stack using array and perform enque,dequeue and display operations
## Theory 
Stack is a linear data structure which can be operated from one end only. The end is known as top of stack. It works on the principle of FILO- First In Last Out and FIFO-First In First Out. There are mainy three operation performed in stack 
Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
Peek or Top: Returns top element of stack.
isEmpty: Returns true if stack is empty, else false.
## Algortihm
void push()
	if(t==max-1)
		print stack is full
	else
	t++;
	a[t]=x;
void pop()
	if(t==-1)
   print Stack is empty
	else
	print a[t])
        t--;
void display()
	int i;
	if(t==-1)
	print Stack is empty
	else
	for(i=t;i>=0;i--)
		print a[i]
## Conclusion
There is no way to add or delete elements anywhere else in the stack 



