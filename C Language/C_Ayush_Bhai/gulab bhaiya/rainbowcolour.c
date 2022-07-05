#include<stdio.h>
int main()
{
    char ch ;
    printf("enter the value of ch\n");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    printf("colour is voilet\n");
    break;
    case 'b':
    printf("colour is indigo\n");
    break;
    case 'c':
    printf("colour is blue\n");
    break;
    case 'd':
    printf("colour is green\n");
    break;
    case 'e':
    printf("colour is yellow\n");
    break;
    case 'f':
    printf("colour is orange\n");
    break;
    case 'g':
    printf("colour is red\n");
    break;    
    default:
    printf("none of these colours\n");
        break;
    }
}