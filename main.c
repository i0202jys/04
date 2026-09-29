#include <stdio.h>
 
int main(void) { 
    int x;

    printf("input the year: ");
    scanf("%i", &x);

    printf("IS the year %i a leap year? :%i\n", x, ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)));
  
    }
