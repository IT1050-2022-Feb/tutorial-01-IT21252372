/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main()
 {
   int i, n, sum= 0;

   printf("Enter a number = ");
   scanf("%d", &n);

   for(i=1; i<=n; i++)
   {
     sum = sum + i; 
   }

   printf("The sum of the numbers = %d", sum);
  
  return 0;
}

