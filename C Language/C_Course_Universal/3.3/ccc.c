// Vowel or Consonant
#include <stdio.h>
void main()
{
    char ch;
    printf("Enter ch : ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
    {
        printf("Character is Vowel\n");        
    }
    else if(ch == 'A'||  ch == 'E'||  ch == 'I'||  ch == 'O'||  ch == 'U')
    {
        printf("Character is Vowel\n");   
    }
    else
    {
        printf("Character is Consonant\n");
    }
}