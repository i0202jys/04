#include <stdio.h>
 
int main(void) { 
    int x;

    printf("input the second: ");
    scanf("%i", &x);


    printf("The time is %i:%i \n",x/60,x%60);


}