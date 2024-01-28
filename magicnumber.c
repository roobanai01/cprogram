#include<stdio.h>
int main()
{
    int a,b,c=0,d,e=0,f;
    printf("please specify the number which is to be find magic or not:");
    scanf("%d", &a);
    b=a;
    while (b>0)
    {
        e=e+b%10;
        b=b/10;
    }
    b=e;
    printf("The sum of the digits is:%d",b);
    while(b>0)
    {
        c=c*10+b%10;
        b=b/10;
    }
    printf("\nThe reverse of the digit is:%d",c);
f=e*c;
    printf("\nThe product of %d * %d is:%d",e,c,f);
    if(f==a)
    {
        printf("\n%d is a magic number",a);
        
    }
    
    else    
        printf("\n%d is not a magic number",a);
        return 0;
}
