#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf ("Enter the value for A:");
    scanf("%d",&a);
    printf ("Enter the value for B:");
    scanf("%d",&b);
    c=a-b;
    printf("The Subtracted Value of A and B is:%d", c);
    return 0;
}