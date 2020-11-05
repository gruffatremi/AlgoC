#include <stdio.h>

int main() {

int a;
int b;


printf("entrez le nombre a :");
scanf("%d", &a);

printf("entrez le nombre b :");
scanf("%d", &b);

//printf("entrez votre choix : ");
char choix;
    printf("entrez l'opérateur");
    scanf(" %c", &choix); /*Space is given before %c*/
//    printf("%c\n",choix);


switch (choix) {
case 43 : printf("%d + %d = %d \n",a,b, a+b);break;
case 45 : printf("%d - %d = %d \n",a,b, a-b);break;
case 42 : printf("%d * %d = %d \n",a,b, a*b);break;
case 47 : printf("%d / %d = %d \n",a,b, a/b);break;
case 37 : printf("%d modulo  %d = %d \n",a,b, a % b);

default:printf("L'operation n'est pas valide"); break;



}


return 0;
}

