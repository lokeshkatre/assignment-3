#include<stdio.h>
int main()
{
    int cost , selling;
    printf("Enter cost:");
    scanf("%d",&cost);
    printf("Enter selling price:");
    scanf("%d",&selling);
    int perc=((selling-cost)*100)/cost;
    if(perc<0)
    printf("%d%% loss",perc);
    else if(perc>0)
    printf("%d%% profit",perc);
    else
    printf("no profit no loss");
    return 0;
}