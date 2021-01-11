#include<stdio.h>
int main()
{
    /*  To print the pattern
    1 
    1 4 
    1 4 9 
    1 4 9 16 
    1 4 9 16 25 
    */
   for(int i=1;i<=5;i++)
   {
       for(int j=1;j<=i;j++)
       {
           printf("%d ",j*j);
       }
       printf("\n");
   }
     
    return 0;
}