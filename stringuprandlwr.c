#include<stdio.h>
#include<string.h>
int main()
{
  char str1[100];
  char str2[100];
  printf("Enter the string:");
  gets(str1) ;
  printf("You need uppercase or lowercase:");
  gets(str2);
  if(strcmp(str2,"uppercase")==0)
  {
    strupr(str1);
    printf("upper case of the string is:%s",str1);
  }
  else if(strcmp(str2,"lowercase")==0)
  {
    strlwr(str1);
    printf("lower case of the string is:%s",str1);
  }
  else
  printf("You entered invalid input");
    return 0;
}

