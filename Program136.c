#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
        if((ch >= 'A')&&(ch <= 'Z') || (ch >= 'a')&&(ch <= 'z'))
        {
            return TRUE;
        } 
        else
        {
            return FALSE;
        }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the charecter\n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Alphabet");
    }
    else
    {
        printf("It is not Alphabet");
    }

    return 0;
}