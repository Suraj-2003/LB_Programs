#include<stdio.h>

void Display(char ch)
{
   if((ch >= 'A')&&(ch <= 'Z'))
   {
       ch = ch + 32;
   }
   else if((ch >= 'a')&&(ch <= 'z'))
   {
       ch = ch - 32;
   }
   
    printf("%c",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the charecter\n");
    scanf("%c",&cValue);
    
    Display(cValue);

    return 0;
}