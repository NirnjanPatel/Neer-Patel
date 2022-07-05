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
    else printf("You Can't Vote\n");
    return 0;
}
