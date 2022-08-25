#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(n>=100&& n<1000)
    printf("Number is three digit number.");
    else
    printf("Number is not a three digit number.");
    return 0;
}