int strt_pst_of_sbstring(char *s1,char *s2)
{
int i=0;
while(*s1!='\0')
{
s1++;
i++;
if(*s1==*s2)
  return i;
}
return -1;
}
