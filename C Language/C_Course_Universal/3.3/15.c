// Vowel or Consonant
#include <stdio.h>
void main()
{
    char ch;
    printf("Enter ch : ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':

    printf("Character is vowel\n");
    break;

    default:
    printf("Character is Consonant\n");
    }
}
