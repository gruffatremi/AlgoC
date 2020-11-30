#include <stdio.h>
#include "operator.h"


int main() {
int a;
int b;


printf("entrez le nombre a :");
scanf("%d", &a);

printf("entrez le nombre b :");
scanf("%d", &b);


char choix;
    printf("entrez l'opérateur");
    scanf(" %c", &choix); /*Space is given before %c*/

switch (choix) {
case 43 : printf("%d  \n ",somme(a,b)); break;
case 45 : printf("%d  \n",difference(a,b) ); break;
case 42 : printf("%d  \n",produit(a,b)); break;
case 47 : printf("%d \n" ,quotient(a,b)); break;
case 37 : printf("%d \n" ,modulo(a,b)); break;
case 38 : printf("%d \n" ,et(a,b)); break;
case 124 : printf("%d \n" ,ou(a,b)); break;
case 126 : printf("%d \n" ,negation(a)); break;


default:printf("L'operation n'est pas valide"); break;



}




return (0);
}
