#include<stdio.h>
int main()
{
    char ch;
    printf("Enter alphabet:");
    scanf("%c",&ch);
    
    if(ch>='a' && ch<='z')
    printf("alphabet is in lower case");
    else if(ch>='A'&& ch<='Z')
    printf("alphabet is in upper case");
    else
    printf("it is not an alphabet");
    return 0;
}