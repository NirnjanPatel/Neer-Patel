#include <stdio.h>
void main()
{
   printf("Press 1 \n");
   printf("Press 2 \n");
   printf("Press 3 \n");
   printf("Press 4 \n");

   int choice;
   printf("Enter Any Choice...\n");
   scanf("%d", &choice);

   switch (choice)
   {
   case 1:
   {
      printf("Hello Chiku...\n");
      break;
   }
   case 2:
   {
      printf("Hello Piku...\n");
      break;
   }
   case 3:
   {
      printf("Hello Miku...\n");
      break;
   }
   case 4:
   {
      printf("Hello Tiku...\n");
      break;
   }
   default:
   {
      printf("Invalid Choice...\n");
   }
   }
}
