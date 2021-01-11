#include<stdio.h>
int main()
{
    /*  To print the pattern
            0 
         -1 0 1 
      -2 -1 0 1 2 
   -3 -2 -1 0 1 2 3 
-4 -3 -2 -1 0 1 2 3 4 


    */
   for(int i=0;i<=4;i++)

   {
       for(int k=4-i;k>=1;k--)//this line for spaces
       printf("   ");
       for(int l=i*-1;l<=i;l++)//thisline controles i from i=0 to i=4;
       printf("%d ",l);
       printf("\n");
   }
     
    return 0;
}