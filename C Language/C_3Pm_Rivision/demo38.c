#include<stdio.h>
#include"myfile.h"
void main()
{
   display(); //without returnType without parameter
   show(20); //without return Type with parameter
   int res = power(5,4); //with returnType with parameter
   printf("Power is : %d\n",res);
   
   int result = armstrong();// with return without para 
   if(result)
   {
     printf("Given num is armstrong..\n");
   }
   else
   {
      printf("Given num is not armstrong..\n");
   }
}
