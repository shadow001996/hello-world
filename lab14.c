#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
typedef struct stack{
	int top;
	unsigned capacity;
	int* array;
}stack;
stack* createstack(unsigned capacity)
{
	stack* stack= (struct stack*)malloc(sizeof(struct stack));
    stack->top=-1;
    stack->capacity=capacity;
    stack->array=(int*)malloc(capacity*sizeof(int));
    return stack;
}
void push(stack* stack,int item)
{
	stack->array[++stack->top]=item;
}
int pop(stack* stack)
{
int item;
item=stack->array[stack->top--];	
return item;
}
int evaluatePostfix(char* exp)
{
    
    stack* stack = createstack(strlen(exp));
    int i;
 
    
   
    for (i = 0; i<strlen(exp); ++i)
    {
        
        if (isdigit(exp[i]))
            push(stack, exp[i] - '0');
 
        
        else
        {
            int val1 = pop(stack);
            int val2 = pop(stack);
            switch (exp[i])
            {
             case '+': push(stack, val2 + val1); break;
             case '-': push(stack, val2 - val1); break;
             case '*': push(stack, val2 * val1); break;
             case '/': push(stack, val2/val1);   break;
            }
        }
    }
    return pop(stack);
}
 

int main()
{
    char exp[] = "231*+9-";
    printf ("Value of %s is %d", exp, evaluatePostfix(exp));
    return 0;
}







