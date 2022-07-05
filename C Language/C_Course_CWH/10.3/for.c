#include <stdio.h>
int main()
{

int i,j;
for ( i = 0,j=1; i < 10; i++,j++) /* if we do not apply expression 1 than our code
                              will be execute simply because we defined there  
                              values in int */
{
    printf("%d %d\n",i,j);
}
    return 0;
}