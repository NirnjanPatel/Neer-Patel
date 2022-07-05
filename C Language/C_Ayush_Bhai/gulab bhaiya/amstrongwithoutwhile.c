#include<stdio.h>
int main(){
    int c,a,f,r,p,s,n;
    printf("enter a no which you want a palindrome\n");
    scanf("%d",&n);
   
    s=n/100;
    r=(n%100)/10;
    // r=(n/10)%10;
    p=n%10;
  f=  p*100+r*10+s;
c=s*s*s+r*r*r+p*p*p;

  printf(" %d",c);
  
//   if (f==n)

//   {
//       printf("no is palindrome\n");

//   }
//   else
//   printf(" no is not palindrome\n");
  
   
}