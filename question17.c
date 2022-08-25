#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a > b)
    {
        if (a > c)
        {
            if (a < b + c)
                printf("triagle is possible");
            else
                printf("triagle is not possible");
        }
        else
        {
            if (c < b + a)
                printf("triagle is possible");
            else
                printf("triagle is not possible");
        }
    }
    else
    {
        if (b > c)
            {
                if(b<a+c)
            printf("triagle is possible");
            else
            printf("triagle is not possible");
            }
        else
            {
                if(c<a+b)
            printf("triagle is possible");
            else
            printf("triagle is not possible");
            }
    }
    return 0;
}