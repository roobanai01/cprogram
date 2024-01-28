#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a;
    int b;
    int c;
    char d[500];
    printf("Enter the value:");
    scanf("%d",&a);
    printf("\nIf you need square of the value then type square \n \t\t (or) \nIf you need cube of the value then type cube:\t");
    scanf("%s", d);
    if(strcmp(d,"square")==0)
    {
        c=a*a;
        printf("The square value of %d is:%d",a,c);
    }
    else if (strcmp(d,"cube")==0)
    {
        c=a*a*a;
        printf("The cube value of %d is:%d",a,c);
    }
    else 
    {
        printf ("You choose the wrong option...");
    }   
        
    return 0;
}
