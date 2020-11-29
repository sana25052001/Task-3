#include <stdio.h>
int prime(int,int);

int main()
{
int a=456456,check;
printf("the entered number is %d\n",a);
check= prime(a,a/2);
if(check==1)
{
printf("the number is prime");
}
else
{
    printf("the number is not prime");
}
    return 0;
}
int prime(int a,int b)
{
if(a==1)
{
    return 1;
}
else
{
    if(a%b==0)
    {
        return 0;
            }
            else 
            {
                return prime(a,b-1);
            }
}
}
