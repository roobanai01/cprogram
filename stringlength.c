#include<stdio.h>
#include<string.h>
int main()
{
    int length =0;
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);
    length=strlen(str);
    printf("Length of the string (%s) is:%d",str,length);
    return 0;
}
