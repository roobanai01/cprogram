#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter the Number:");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        c=c*10+b;
        a/=10;
    }
    printf("Reversed number of Entered number is:%d",c);
    return 0;
}
