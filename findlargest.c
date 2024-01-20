#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Value of A:");
    scanf("%d", &a);
    printf("Enter the Value of B:");
    scanf("%d", &b);
    printf("Enter the Value of C:");
    scanf("%d", &c);
    if (a>b && a>c)
    {
        printf("A is greater than B and c");
    }
    else if (b>a && b>c)
    {
        printf("B is greater than A and C");
    }
    else
    printf("C is greater than A and B");
    return 0;
}
