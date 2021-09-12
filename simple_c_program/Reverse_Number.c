#include <stdio.h>

int main()
{
   int n, reverse = 0;
   printf("\nEnter a number to reverse :- ");
   scanf("%d", &n);
   while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n = n/10;
   }
   printf("\nReverse of entered number is = %d\n", reverse);
   return 0;
}

// You can also try this out...

/*
 int main() {
    int num, reverse = 0, remainder;
    printf("Enter a number\n");
    scanf("%d", & num);
    while (num != 0) {
      remainder = num % 10;
      reverse = reverse * 10 + remainder;
      num = num / 10;
    }
    printf("Reverse of the number is : %d\n", reverse);
    return 0;
  }
*/
