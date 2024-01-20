#include<stdio.h>
int main()
{
    int a,b;
    long int c;
    printf("Enter the Number:");
    scanf("%d",&a);
    c=1;
    for(b=a;b>=1;b--)
    c=c*b;
    printf("Factorial number of %d is:%ld",a,c);
    return 0;
}
