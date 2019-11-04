#include<stdio.h>
void main()
  {
       int n,c,r,l;

     printf("Enter a no ");
 
              scanf("%d",&n);
   
     for(r=n;r>=1;r--)
  {
    for(l=n-r;l>=1;l--)

      printf(" ");
     
      for(c=1;c<=r;c++)
       
     printf(" *");

   printf("\n");
                          }
                 }

