#include <stdio.h>
#include <stdlib.h>

main() {

   int a ;
   int b ;
   int c ;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);

   c = a + b;
   printf("Sum %d\n", c );

   c = a - b;
   printf("Subtract %d\n", c );

   c = a * b;
   printf("Multiply %d\n", c );

   c = a / b;
   printf("Divition %d\n", c );

   c = a % b;
   printf("Modulo is %d\n", c );

   c = a++;
   printf("Increment %d\n", c );

   c = a--;
   printf("Decrement %d\n", c );
}
