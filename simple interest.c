#include<stdio.h>
int main ()
{
float si,p,t,r;
printf("enter p=\n");
printf("enter t=\n");
printf("enter r=\n");
scanf("%f %f %f",&p,&t,&r);
si=p*t*r/100;
printf("si=%f",si);
return 0;
}
