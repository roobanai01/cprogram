#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the Value of A:");
    scanf("%d",&a);
    printf("Enter the Value of B:");
    scanf("%d",&b);
    printf("Values before swapping\n a=%d, b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nValues after swapping\n a=%d, b=%d",a,b);
    return 0;
}
