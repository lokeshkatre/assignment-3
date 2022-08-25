#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("\n%d",a);
    else
    printf("\n%d",b);
    
    return 0;
}