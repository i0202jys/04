#include <stdio.h>
 
int main(void) { 
    int x, y;
int res;

    printf("Enter two integers: ");
    scanf("%i %i", &x, &y);

res = x + y;
    printf("%i+%i=%i \n",x,y,res);
res = x - y;
    printf("%i-%i=%i \n",x,y,res);
res = x * y;
    printf("%i*%i=%i \n",x,y,res);
res = x / y;
    printf("%i/%i=%i \n",x,y, x/y);


}