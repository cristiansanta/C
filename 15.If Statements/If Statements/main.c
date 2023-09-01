#include <stdio.h>
#include <stdlib.h>

int IFF(int num1, int num2, int num3);

int main()
{ int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("The biggest number is: %d", IFF(num1, num2, num3));
    if(!(3>6))//we're negating operation
    {
      printf("\n\nTrue\n\n\n");
    }
    return 0;
}

int IFF(int num1, int num2, int num3)
{ // int result;
    if(num1>=num3 && num1>=num2)
    {
        num1 = num1;
    }
   else if(num2>=num1 && num2>=num3)
   {
       num2=num2;
   }
   else
   {
       num3=num3;
   }
    //return result;
}
