#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(n==0)
    printf("%d is zero",n);
    else if(n>0)
    printf("%d is positive",n);
    else
    printf("%d is negative",n);
    return 0;
}