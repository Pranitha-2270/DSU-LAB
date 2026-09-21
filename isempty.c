#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
int isEmpty()
{
return top==-1;
}
int main()
{
if(isEmpty())
printf("stack is empty\n");
else 
printf("stack is not empty\n");
return 0;
}
