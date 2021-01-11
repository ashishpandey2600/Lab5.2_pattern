#include<stdio.h>
int main()
{
    /*  To print the pattern
    */
     for(int i=90;i>=86;i--)
     {
         for(int k=i;k>=87;k--)
         printf("  ");
         for(int j=90;j>=i;j--)
         printf("%c   ",j);
         printf("\n");

     }
    return 0;
}