#include<stdio.h>

int LCM(int,int);
int main()
{
    int a=12,b=30,lcm;
    printf("input first number:%d\n",a);
    printf("input second number:%d\n",b);
    lcm=LCM(a,b);
    printf("the lcm of %d and %d: %d",a,b,lcm);
    return 0;
}

int LCM(int a,int b)
{
  static int multiple=0;
  multiple+=b; //increments the multiple
    if((multiple%a==0) && (multiple%b==0))
    {
        return multiple;
    }
    else
    {
        return LCM(a,b);
          
    }
}
