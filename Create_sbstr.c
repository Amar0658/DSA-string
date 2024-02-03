substr(char *s1,int s,int n){
int i;
for(i=0;i<s-1;i++)
{
s1++;
if(*s1=='\0')
{
printf("there are less than %d characters in string\n",s);
exit(1); //stdlib.h
}
}
for(i=1;i<=n;i++)
{
printf("%c",*s1);
s1++;
}
