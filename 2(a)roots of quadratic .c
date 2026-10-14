#include<stdio.h>
#include<math.h>
void main ()
{
float a,b,c,d,r1,r2;
printf("enter a,b,c values");
scanf("%f %f %f",&a,&b,&c);
d=b*b-4*a*c;
if (d<0)
{
printf("Roots are imaginary");
}
else if (d==0)
{
r1=-b/2*a;
printf("Roots are equal");
printf("%f",r1);
}
else
{
r1=(-b+sqrt(d))/2*a;
r2=(-b-sqrt(d))/2*a;
printf("%f %f",r1,r2);
}
}
