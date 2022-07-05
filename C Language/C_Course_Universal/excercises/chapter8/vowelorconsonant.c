#include <stdio.h>
int main()
{
    char fd;
    printf("Enter character : ");
    scanf("%c\n", &fd);
    switch (fd)
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
        printf("%c is Vowel\n", fd);
        break;
    default:
        printf("%c is Consonant\n", fd);
        break;
    }
    return 0;
}
