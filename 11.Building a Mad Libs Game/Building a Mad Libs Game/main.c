#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color [20];
    char pluraNoun[20];
    char celebrity[20];
    char celebretyL[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluraNoun);
    printf("Enter a celebrity: ");
    scanf("%s%s", celebrity, celebretyL);

    printf("\nThe rocket is %s\n", color);
    printf("%s are creative\n", pluraNoun);
    printf("My parents love %s %s\n", celebrity, celebretyL);

    return 0;
}
