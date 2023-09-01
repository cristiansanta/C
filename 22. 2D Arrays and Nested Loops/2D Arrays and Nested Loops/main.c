#include <stdio.h>
#include <stdlib.h>

int main()
{ int nums[3][2] = {
                   {3,3},
                   {4,8},
                   {6,9}
                   };
    int i,j;
    for(i=0;i < 3;i++){
        for(j=0;j < 2; j++){
            printf("%d,",nums[i][j]);
        }
        printf("\n");
    }
}
