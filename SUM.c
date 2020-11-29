#include<stdio.h>
int SUM(int);
int main()
{
    int a=1234,sum;
    printf("input number is:%d\n",a);
    sum=SUM(a);
    printf("sum of digits in %d is:%d",a,sum);
    return 0;
}
int SUM(int a)
{
    if(a==0)
    return 0;
    return(a%10+SUM(a/10));
}
