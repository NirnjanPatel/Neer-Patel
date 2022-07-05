// if else if Ladder statement with using operators
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter Value of x\n");
    scanf("%d",&x);
    printf("Value of x=%d\n",x);
    y=(--x);
    printf("Value of y=%d\n",y);
    z=(x>y)?x:y;
    printf("Value of z=%d\n",z);
    if (x>y && y>z)
    {
    printf("X is Greatest = %d\n",x);
     }

    else if (x<y && x<z) 
    printf("X is smallest = %d\n",x);
   
   
     else 
    printf("Value of z=%d\n",z);
    
    
    return 0;
}
