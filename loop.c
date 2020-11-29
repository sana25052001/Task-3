#include<stdio.h>
int main()
{
    int a,b,num=6;
    printf("entered number is:%d\n",num);

    for(a=1;a<=num;a++)
    {
        for(b=1;b<=a;b++)
        {
            if(b%2==1)
            {
                printf("1");
            }
                else
                {
                    printf("0");
                }
        }
        printf("\n");
    }
    return 0;
}
