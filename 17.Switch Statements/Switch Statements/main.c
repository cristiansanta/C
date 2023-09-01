#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade = 'a';

    switch(grade){
    case 'a' :
        printf("You did great!");
        break;
    case 'b' :
        printf("You did poorly");
        break;
    case 'c':
        printf("You did very bad");
        break;
    case 'f':
        printf("You failed");
        break;
    default :
        printf("Invalid Grade");
    }

    return 0;
}
