#include<stdio.h>
// #include<math.h>
int main()
{
    int  count=0,rem,sum=0,digit,n;
  printf("enter a no\n");
  scanf("%d",&n);
  
int t=n, temp=n;

  while (n!=0)   //153
  {
    count++;  //1      2     3
      n=n/10;        //15       1

  }
  printf("value of t is %d\n",t);
while(t>0)
{
    rem=t%10;          //153%10 =3  //15%10=5   //1%10=1
    sum=sum+(rem*rem*rem);     //3^1  //5^3  //1^3
    t=t/10;          //153    //15   // 1
} 
printf("value of sum is %d\n",sum);
printf("value of temp is %d\n",temp);
if (sum==temp)   

    printf("%d no is armstrong\n",temp);
    
else
printf("is not a armstrong \n %d",temp);

}