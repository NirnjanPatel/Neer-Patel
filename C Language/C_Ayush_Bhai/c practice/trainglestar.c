#include<stdio.h>
int main()
{
    int i ,j,rows,spaces;
    printf("enter no of rows\n"); 
    scanf("%d",&rows);              //5
    for ( i =1 ; i <=rows; i++)       //1<=5  //2<=5
    {
        for ( spaces=1;  spaces<=(rows-i); spaces++)     //1<=4  //2<=4  //3<=4  //4<=4
        {                                                //1<=3   //2<=3   //3<=3
            printf(" ");
        }
      for ( j = 1; j <=2*i-1;  j++ )   //acc to bodmass   //1<=(2*1)-1
      {
         printf("*");
      }
        printf("\n");
    }
    
}