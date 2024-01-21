#include<stdio.h>
int main()
{
    int a;
    int b=1;
    int c=0;
    int d;
    printf("Enter the value to convert:");
    scanf("%d",&a);
    d=a;
    while(a!=0)
    {
        c=c+(a%10)*b;
        a=a/10;
        b=b*2;
    }
printf("The decimal value of %d is %d",d,c);
    return 0;
}
