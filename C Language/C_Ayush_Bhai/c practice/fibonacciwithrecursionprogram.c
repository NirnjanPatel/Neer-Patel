#include<stdio.h>
int fibonacci (int );
 int main()
 {
     int n,i,k;
     printf("enter max length of fibonacci series \n");
     scanf("%d",&n);
     for ( i = 0; i <n; i++)       
     {
         printf("%d ",fibonacci(i));
     }                                            //011 2358
     
 }
 int fibonacci (int i)
 {
     if (i==0)
     {
        return 0;
     }
     else if (i==1)
return 1;
else
return(fibonacci(i-1)+fibonacci(i-2));       
 }  // i=2 fibonacci(1)+fibonacci(0);
    //1+0=1

             
        // i=3    fibonacci(2)+fibonacci(1)
        //        fibonacci(2-1)+1
        //         1+1
        //         2
         


        //i=4     fibonacci(3)+fibonacci(2)
          //      fibonacci(3-1)+1
          //      fibonacci (2)+1
          //       1+1
          //        2
