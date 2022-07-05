#include<stdio.h>
int main()
{
    char ch ;
    printf("enter the value of character\n");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
      printf("ch is vowel\n");
        break;
    case 'e':
      printf("ch is vowel\n");
        break;
    case 'i':
      printf("ch is vowel\n");
        break;
    case 'o':
      printf("ch is vowel\n");
        break;
    case 'u':
      printf("ch is vowel\n");
        break;
    
    default:
    printf("the character is consonant\n");
        break;
    }
}