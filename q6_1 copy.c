#include<stdio.h>
int main()
{
    /*  To print the pattern
        1   
      2   2   
    3   3   3   
  4   4   4   4   
5   5   5   5   5   
    */
   for(int i=1;i<=5;i++)
   {
       for(int k=5-i;k>=1;k--)
       printf("  ");
       for(int k=1;k<=i;k++)
       printf("%d   ",i);
       printf("\n");

   }
     
    return 0;
}