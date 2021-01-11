#include<stdio.h>
int main()
{
    /*  To print the pattern

        1A2B3C4D5E
        1A2B3C4D
        1A2B3C
        1A2B
        1A
    */
     for(int i=5;i>=1;i--)
     {
         for(int j=1;j<=i;j++)
         printf("%d%c",j,j+64);
         printf("\n");
     }





    return 0;
}