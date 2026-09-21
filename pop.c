#include <stdio.h>
#define MAX 100
int stack[MAX];
int top = -1;
void pop() {
if (top == -1) {
printf("Stack Underflow\n");
} else {
printf("Popped element: %d\n", stack[top]);
top--;
}
}
int main() {
stack[++top] = 10;
stack[++top] = 20;
stack[++top] = 30;
pop();
return 0;
}

