#include<stdio.h>
int main()
{
    int a;
    int i;
    char name[100];
    printf("Enter what you want to repeat:");
    scanf("%s", &name);
    printf("Enter how many times you want to repeat:");
    scanf("%d", &a);
    for ( i = 0; i <= a; i++)
    {
        printf("%s\n",name);
    }
    return 0;
}