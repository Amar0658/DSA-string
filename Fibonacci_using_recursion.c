// print n Fibonacci numbers
#include <stdio.h>
fibonacci(int n)
{
    static int a=1,b=1,sum;
    printf("%d ",a);
    if(n<3)
    return;
    sum=a+b;
    a=b;
    b=sum;
    fibonacci(n-1);
}
int main() {
    // Write C code here
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==1)
    printf("%d",0);
    else
    {printf("0 ");
    fibonacci(n);}
    return 0;
}


//Fibonacci numbers less than n
#include <stdio.h>
fibonacci(int n)
{
    static int a=1,b=1,sum;
    if(a>n)
    return;
    printf("%d ",a);
    sum=a+b;
    a=b;
    b=sum;
    fibonacci(n-1);
}
int main() {
    // Write C code here
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==1)
    printf("%d",0);
    else
    {printf("0 ");
    fibonacci(n);}
    return 0;
}
