#include<stdio.h>
struct book
{
    char n;
};
void main()
{
    struct book b;
    
     b.n='z';
    
    printf("\n name = %c\n",b.n);
}

