#include<stdio.h>
#include<string.h>
struct product
{
    int id;
    char name[20];
    float quantity, price;
};

int main()
{
    struct product p[4],temp;
    int i,j;
    for ( i = 0; i <4; i++)
    {
        printf("enter product details\n ");
        scanf("%d",&p[i].id);
        scanf("%f",&p[i].quantity);
        scanf("%f",&p[i].price);    
        printf("enter name \n");
        getchar();
        gets(p[i].name);
    }                             
    
    
   
   for ( i = 0; i < 4; i++)
   {
       for ( j = 0; j < 3; j++)
       {
         if (strcmp(p[i].name,p[j].name)<0)    
         {
             temp=p[j+1];
             p[j+1]=p[j];
             p[j]=temp;
         }
       }
   }
        
       
   
    for ( i = 0; i <4; i++)
    {
        printf("product details are as follows\n");
        printf("product name=%s\n",p[i].name);
        printf("product quantity=%f\n",p[i].quantity);
        printf("product price=%f\n",p[i].price);
    }
    
    

}
