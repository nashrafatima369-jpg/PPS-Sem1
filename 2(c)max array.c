#include<stdio.h>
int main ()
{
    int A[5],max,i;
    printf("Enter 5 values");
    for (i=0;i<5;i++)
    scanf("%d",&A[i]);
    max=A[0];
    for (i=0;i<5;i++)
    {
     if (A[i]>max)
            max=A[i];
    }
    printf("max=%d",max);
    return 0;
}
