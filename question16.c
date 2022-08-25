#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z')
    printf("Lower case alphabet");
    else if(ch>='A'&& ch<='z')
    printf("Upper case alphabet");
    else if(ch>='0' && ch<='9')
    printf("digit");
    else if((ch>='!'&&ch<='/')||(ch>=':'&& ch<='`')||(ch>='{'&& ch<='~'))
    printf("special character");
    return 0;
}