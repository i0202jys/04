#include <stdio.h>
 
int main(void) { 
    int x;

    printf("input the seconds: ");
    scanf("%i", &x);

    
    printf("The time for %i seconds is %i : %i : %i\n", x, x/3600, (x%3600)/60, x%60);
  
    }
