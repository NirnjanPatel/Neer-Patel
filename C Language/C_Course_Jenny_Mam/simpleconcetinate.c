#include <stdio.h>
#include <string.h>
int main()
{
    char name[33] = "Niranjan ";
    char sirname[11] = "Malviya";
    strcat(name, sirname);
    printf("%s", name);
}