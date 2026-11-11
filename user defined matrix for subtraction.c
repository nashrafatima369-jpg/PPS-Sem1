#include<stdio.h>
int main ()
{
int A[2][2],B[2][2],i,j,C[2][2],r,c;
printf("Enter number of rows");
scanf ("%d",&r);
printf("Enter number of column");
scanf ("%d",&c);
printf("Enter 4 elements for matrix A");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&A[i][j]);

printf("Enter 4 elements for matrix B");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&B[i][j]);

for(i=0;i<r;i++)
for(j=0;j<c;j++)
C[i][j]=A[i][j]-B[i][j];

printf("A matrix=\n");
for (i=0;i<r;i++)
{
for (j=0;j<c;j++)
printf("%d ",A[i][j]);
printf("\n");
}

printf("B matrix=\n");
for (i=0;i<r;i++)
{
for (j=0;j<c;j++)
printf("%d ",B[i][j]);
printf("\n");
}

printf("Subtraction=\n");
for (i=0;i<r;i++)
{
for (j=0;j<c;j++)
printf("%d ",C[i][j]);
printf("\n");
}
return 0;
}
