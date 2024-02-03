#include<stdio.h>
concat(char *s1,char *s2)
{
while(*s1!='\0')
s1++;
while(*s2!='\0')
{
*s1=*s2;
s1++;
s2++;
}
*s1='\0';//To fix the last char otherwise it will be rearrange and space will be removed.
}
int main()
{
char s1[30],s2[30];
printf("Enter the first string: ");
gets(s1);
printf("Enter the second string: ");
gets(s2);
concat(s1,s2);
printf("Now the first string is %s\n",s1);
}
