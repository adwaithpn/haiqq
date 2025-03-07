#include <stdio.h>
int sum(int ,int);
int sum(int a,int b)
{
return (a+b);
}

void main()
{
 int k=4,l=3;
 int x= sum(k,l);
 printf("Result %d",x);
}

