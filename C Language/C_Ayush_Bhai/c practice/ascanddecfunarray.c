#include <stdio.h>
int i ,j ,temp;
void fun1(int[] , int);
void fun2(int[] , int);

int main()
{
    int n;
    printf("enter array size\n");
    scanf("%d", &n);

    int a[n];
    printf("enter array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

int q;
printf("please enter your choice 1 for dec. and 2 for asc :\n");
scanf("%d",&q);

    switch (q)
    {
    case 1:
        fun1(a,n);
        // printf("sadf");
        break;
    case 2:
       fun2(a,n);
        break;
    
    default:
    printf("invalid \n");
        break;
    }
}
void fun1(int p[], int q)
{
    for (i = 0; i < q; i++)  //5
    {
        for (j = 0; j < q-1; j++)  //4
        {

            if (p[j] <p[j + 1])

            {
                temp = p[j+1];
                p[j+1] = p[j];
                p[j ] = temp;
            }
        }
    }
        printf("sorted list is as follows\n");
        for (i = 0; i < q; i++)
        {
            printf("\t %d", p[i]);
        }
    
}

void fun2(int p[], int q)

{
    for (i = 0; i < q; i++)
    {
        for (j = 0; j < q-1; j++)
        {

            if (p[j]>p[j + 1])

            {
                temp = p[j];
                p[j] = p[j+1];
                p[j + 1] =temp;
            }
        }
    }
        printf("sorted list is as follows\n");
        for (i = 0; i < q; i++)
        {
            printf("\t %d", p[i]);
        }
    
}

