#include<stdio.h>
int main()
{
    int age;
    char name [50];
    printf("Enter the Name:");
    scanf("%s", &name);
    printf("Enter the Age:");
    scanf("%d", &age);
    if(age>=18)
    {
        printf(" %s is eligible to Vote", name);
    }
    else
    {
        printf(" %s is not eligible to Vote", name);
    }
    return 0;
}
