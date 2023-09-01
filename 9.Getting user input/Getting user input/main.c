#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ad[19], ac[50];
    printf("Enter your name:\n");
    fgets(ad,20,stdin);//with this function I can store phrases even with blank spaces
    printf("Your name is: %s", ad);

    printf("What's your name:\n");
    scanf("%s", &ac);//with this function I can store one word here I can't store phrases with blank spaces
    printf("Her name is: %s", ac);
    return 0;
}
