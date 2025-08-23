#include <stdio.h>
#include <math.h>

int main(){
    double x;

    printf("enter a number: ");
    scanf("%1f", &x);

    printf("square root = %.21f\n", sqrt(x));
    printf("absolute value = %.21f\n", fabs(x));

    return 0;
}
