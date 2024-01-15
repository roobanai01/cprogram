#include<stdio.h>
int main()
{
int a,b;
int c=0;
printf("Enter the Value:");
scanf("%d",&a);
for(b=2;b<a;b++)
{
if(a%b==0)
{
c++;
printf("The given Value is not a prime Number");
break;
}
}
if(c==0)
printf("The given Value is a prime Number");
return 0;
}