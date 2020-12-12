#include <stdio.h>
#include <stdlib.h>
#include "operator.h"
int main (int argc, char **argv) {

int choix = argv[1][0]; // on recupere en ASCII la value
int a = atoi (argv[2]); // on converti ASCII en int 
int b = atoi (argv[3]); // pareil 

// printf("%d  %d %d \n ",a , b, choix);

// on refait ensuite appel au fichier operator.h pour éxecuter les commandes 

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

return (0);

}
}
