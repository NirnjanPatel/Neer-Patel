#include <stdio.h>
int main()
{
    int amount, th, fh, tw, h, f, t, ten, five, two, one;
    printf("Enter Amount\n");
    scanf("%d", &amount);
    th = amount / 1000;
    fh = amount % 1000 / 500;
    tw = amount % 1000 % 500 / 200;
    h = amount % 1000 % 500 % 200 / 100;
    f = amount % 1000 % 500 % 200 % 100 / 50;
    t = amount % 1000 % 500 % 200 % 100 % 50 / 20;
    ten = amount % 1000 % 500 % 200 % 100 % 50 % 20 / 10;
    five = amount % 1000 % 500 % 200 % 100 % 50 % 20 % 10 / 5;
    two = amount % 1000 % 500 % 200 % 100 % 50 % 20 % 10 % 5 / 2;
    one = amount % 1000 % 500 % 200 % 100 % 50 % 20 % 10 % 5 % 2 / 1;
    printf("Notes of 1000 = %d\n", th);
    printf("Notes of 500 = %d\n", fh);
    printf("Notes of 200 = %d\n", tw);
    printf("Notes of 100 = %d\n", h);
    printf("Notes of 50 = %d\n", f);
    printf("Notes of 20 = %d\n", t);
    printf("Notes of 10 = %d\n", ten);
    printf("Notes of 5 = %d\n", five);
    printf("Notes of 2 = %d\n", two);
    printf("Notes of 1 = %d\n", one);
    return 0;
}
