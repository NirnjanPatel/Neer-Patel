#include <stdio.h>
void main()
{
 int a[10],b[5],c[15],i;

 for (i=0;i<10;i++)
 {
    //  printf ("\n enter an element a[%d]=",i);
     scanf ("%d",&a[i]);
 }

 for (i=0;i<5;i++)
 {
     printf ("\n enter an element b[%d]=",i);
     scanf ("%d",&b[i]);
 }
   for ( i = 0; i < 10; i++)
   {
     c[i]=a[i];
     c[i+10]=b[i];
   }
    for ( i = 0; i < 15; i++)
    {
      printf("%d\n",c[i]);
    }
    


}