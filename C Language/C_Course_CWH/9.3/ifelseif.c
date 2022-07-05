#include<stdio.h>
int main() 
{
    int age;
    printf("Hello World\n");
    printf("Age\n");
    scanf("%d",&age);
    printf("You entered %d as your age\n",age);
    if (age>=18){
        printf("You Can Vote\n");
    }
    else if(age>12)
    printf("You Can Vote For Kids\n");
    else if(age>=5)
    printf("You Can Vote For Small Kids\n");
    else printf("You Can't Vote\n");
    // else is not must but we can add else for our .....?
        return 0;
}
