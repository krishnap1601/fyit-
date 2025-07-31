#include <stdio.h>
#include <stdlib.h>

int main(){

    float P,R,T,SI;

    printf("ENTER PRINCIPAL AMOUNT: \n");
    scanf("%F" , &P);

    print("ENTER RATE OF INTREST: \n");
    scanf("%F" , &R);

    printf("ENTER TOTAL INTREST (IN YEAR): \n");
    scanf("%F" , &T);

    SI = (P*R*T) / 100;

    printf("SIMPLE INTREST = %.2F \n", SI);

    return 0;
}
