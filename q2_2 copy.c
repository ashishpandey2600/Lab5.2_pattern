#include<stdio.h>
int main()
{
    /*  To print the pattern

              1
             22
            333
           4444
          55555
    */
   for(int i=1;i<=5;i++)
   {
       for(int k=5-i;k>=1;k--)
       {
       printf(" ");
       }
       for(int j=1;j<=i;j++)

       {
       printf("%d",i);}
        printf("\n");
   }
  
     
    return 0;
}