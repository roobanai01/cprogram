#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Value up to 20:");
    scanf("%d", &a);
    while (a<=20)
    {
        printf("The Value is %d\n", a);
        a++;
    }
    return 0;
}
