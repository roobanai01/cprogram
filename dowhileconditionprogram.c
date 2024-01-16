#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Value up to 20:");
    scanf("%d", &a);
    do
    {
        printf("The Value is %d\n", a);
        a++;
    } while (a<=20);
    return 0;
}
