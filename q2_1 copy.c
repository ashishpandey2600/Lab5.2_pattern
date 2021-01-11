#include<stdio.h>
int main()
{
    /*  To print the pattern

         5
        44
       333
      2222
     11111

    */
    for(int i=5;i>=1;i--)
    {
        for(int k=i-1;k>=1;k--)
        {
        printf(" ");}
        for(int j=i;j<=5;j++){
        printf("%d",i);}
        printf("\n");
    }     
    return 0;
}