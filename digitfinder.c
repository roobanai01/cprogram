#include<stdio.h>
int main()
{
    int a;
    int b=0;
    printf("Enter the Value:");
    scanf("%d",&a);
    do
    {
        a/=10;
        b++;
    } while (a!=0);
    printf("Number of digits in the given Value is:%d", b);    
    return 0;
}
