#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int b;
    printf("Enter the value:");
    scanf("%d",&a);
    b=cbrt(a);
    printf("Cuberoot of %d is:%d",a,b);
    return 0;
}
