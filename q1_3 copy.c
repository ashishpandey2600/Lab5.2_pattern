#include<stdio.h>
int main()
{
    /*
    To print the pattern

    AAAAA
    BBBB
    CCC
    DD
    E
    
    */
   for(int i=65;i<=69;i++)
   {
       for(int j=i;j<=69;j++)
       printf("%c",i);
        printf("\n");
   }

   printf("\n");
    return 0;
}