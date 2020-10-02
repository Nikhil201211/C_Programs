#include<stdio.h>

int main()
{
int a,b;
printf("enter two numbers for swapping\n");
scanf("%d%d",&a,&b);
int temp=a;
a=b;
b=temp;
 printf("After swap a=%d b=%d",a,b);
return 0;
}
