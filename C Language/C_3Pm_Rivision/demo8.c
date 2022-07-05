/*
  Logical Operator : Based on Condition
    There are 3 types of logical operator
    1.Logical AND Operator (&&) :
    2.Logical OR Operator (||) :
    3.Logical NOT Operator (!) :

    AND Operator : All condition true then result true.
    OR Operator : Any one condition true then result true.
    NOT Operator : true--->false and false----->true.

    truth table :
     x  y  x&&y  x||y
     0  0   0     0
     0  1   0     1
     1  1   1     1
     1  0   0     1
     ----------------------------
     x  !x
     0  1
     1  0
     --------------------------
     Here 0 : false and 1: true

     = : Assign value
     == : Compare values

*/
#include <stdio.h>
void main()
{
  int x, y, z;
  printf("Enter the value of x and y\n");
  scanf("%d%d", &x, &y);
  z = (x == y);
  printf("VValue of z is : %d\n", z);
}
