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
printf("stack is full\n");
else 
printf("stack is not full\n");
return 0;
}
