//Exercice 1.7
#include <stdio.h>

int main () {
    int i; for (i=0; i<=1000; i++) {
//Test si divisible par 2 ou 15
    if (i%2==0 && i %15==0){
            printf("%d est divisible par 2 et 15\n",i);
            }

//test si divisible par 103 ou 107
    if (i%103==0 || i %107==0){
            printf("%d est divisible par 103 ou 107\n",i);
            }
//test si divisible par 7 ou 5 mais pas 3
    if (i%7==0 || i %5==0 && i%3==!0){
            printf("%d est divisible par 7 ou 5 mais pas 3\n",i);
            }
    }
return 0;
}
