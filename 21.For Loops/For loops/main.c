#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int LuckyNumbers[] = {4, 8, 15, 22, 23, 97};

    for(int i=0; i<=5; i++)
    {
        printf("%i\t", LuckyNumbers[i]);
    }
    printf("Hello world!\n");*/

   int y;
   printf("triangle height: ");   //DIBUJAR TRIANGULO
   scanf("%i", &y);

   for(int k=1;k <= y-1; k++)
   {
       printf(" ");
   }
    printf("*\n");
    for(int k=2;k <= y-1;k++)
    {
        for(int j=1;j <= y-k; j++)
        {
           printf(" ");
        }
       printf("*");
       for(int j=1; j <= 2*k-3; j++)
       {
       printf(" ");
       }
       printf("*\n");
    }
    printf("*");
        for(int k=1; k <= y-1; k++)
        {
         printf(" *");
        }
    printf("\n");
    return 0;
}
