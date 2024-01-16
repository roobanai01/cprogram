#include<stdio.h>
int main()
{
    int a;
    int b=0;
    int n;
    int r;
    int sum=0;
    int temp;
    printf("Enter the Value:");
    scanf("%d",&a);
    n=a;
    temp=a;
    do
    {
        a/=10;
        b++;
    } while (a!=0);
    printf("Number of digits in the given Value is:%d\n", b);
    if (b==3)
    {
     while(n>0)
     {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
     }   
     if(temp==sum)
     {
     printf("The Entered Value is an Armstrong Number\n");
     }
     else
     printf("The Entered Value is not an Armstrong Number\n");
    }
    else
    {
    while(n>0)
     {
        r=n%10;
        sum=sum+(r*r*r*r);
        n=n/10;
     }   
     if(temp==sum)
     {
     printf("The Entered Value is an Armstrong Number\n");
     }
     else
     printf("The Entered Value is not an Armstrong Number\n");
    }   
    return 0;
}