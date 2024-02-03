#include <stdio.h>
strcpy(char *s1,char *s2)
{
while(*s2!='\0')
{
*s1=*s2;
s1++;
s2++;
}
*s1='\0';
}

int main()
{
char s1[30],s2[30];
printf("Enter the first string: ");
gets(s1);
printf("Enter the second string: ");
gets(s2);
strcpy(s1,s2);
printf("Now the first string is %s\n",s1);
}
