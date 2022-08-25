#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a,b,c of quadratic equation:\n");
    scanf("%d%d%d",&a,&b,&c);
    int D=b*b-4*a*c;
    printf("roots are");
    if(D>0)
    printf("real and different\n");
    else if(D==0)
    printf("real and equal");
    else 
    {
        if(b==0)
    printf("equal and imaginary");
    else
    printf("different and imaginary");

    }
    return 0;
}