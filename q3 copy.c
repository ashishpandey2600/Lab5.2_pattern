#include<stdio.h>
int main()
{
    /*  To print the pattern
       54321
        5432
         543
          54
           5
    */
   for(int i=1;i<=5;i++)
   {
       for(int k=1;k<=i-1;k++)
         printf(" ");
       
       for(int j=5;j>=i;j--)
       printf("%d",j);
       
        printf("\n");
   }

     
    return 0;
}