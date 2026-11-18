#include<stdio.h>
int main ()
{
int key,i,s=0,A[5];
printf("Enter 5 elements");
for(i=0;i<5;i++)
scanf("%d",&A[i]);
printf("Enter searching element");
scanf("%d",&key);
for(i=0;i<5;i++)
{
if (key==A[i])
{
s=1;
printf("Element found at %d");
break;
}
}
if (s==0)
printf("Element is not found");
return 0;
}
