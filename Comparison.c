#include<stdio.h>
compare(char *s1,char *s2){
while(*s1!='\0' || *s2!='\0')
{
if(*s1==*s2)
{
s1++;
s2++;
}
else
  return (*s1-*s2);
}
return 0;
}
int main()
{
char s1[30],s2[30];
printf("Enter the first string: ");
gets(s1);
printf("Enter the second string: ");
gets(s2);
int len=compare(s1,s2);
printf("%d\n",len);
  return 0;
}
