#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(n%3==0 && n%2==0)
    printf("%d is divisible by 3 and 2 both",n);
    else
    printf("%d is not divisible by 3 and 2 both",n);
    return 0;
}