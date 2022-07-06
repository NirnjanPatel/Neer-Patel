#include <stdio.h>
int main()
{
    /*  label:
    printf("Hello World\n");
    goto end;
    printf("We are inside lable\n");
    end:
    goto label;
  printf("Hello World\n");
  */
    for (int i = 0; i < 77; i++)
    {
        printf("%d", i);
        for (int j = 0; i < 8; i++)
        {
            printf("ENter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
    }}}
    return 0;
}