#include <stdio.h> // en-têtes(headers)
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "fichier.h"
#include <string.h>
int main() {
//definition d'une structure étudiant
/*
struct etudiant{
char prenom[30];
char nom[30];
char addresse[30];;
char prog_c[5];
char System_exploitation[5];
};
*/
char tmp[10];
int nbr,i;
char nom[30];
char prenom[30];
char address[50];
char prog_c[5];
char sys[5];
//déclaration d'un étudian

printf("combien d'eleve voulez vous");
scanf("%d",&nbr);

for (i=0 ; i < nbr ; i++) {

printf("Quel est votre nom ? ");
scanf("%s",prenom);
printf("prenom de l'étudiant : ");
scanf("%s",nom);
printf("address de l'étudiant : ");
int c;
while ( ((c = getchar()) != '\n') && c != EOF){};// on vide le buffer / l'entrée en cours
scanf("%[^\n]%*c",address); // expression réguliere pour ne prend en compte que le retour chariot comme fin de chaine et non l'espace
printf("note de l'étudiant PROG: ");
scanf("%s",prog_c);
printf("note  de l'étudiant SYSTEM: ");
scanf("%s",sys);

ecrire_dans_fichier("etudiant.txt",prenom);
ecrire_dans_fichier("etudiant.txt",", "); // on écrit avec les virgules pour l'affichage

ecrire_dans_fichier("etudiant.txt",nom);
ecrire_dans_fichier("etudiant.txt",", ");


ecrire_dans_fichier("etudiant.txt",address);
ecrire_dans_fichier("etudiant.txt",", ");


ecrire_dans_fichier("etudiant.txt",prog_c);
ecrire_dans_fichier("etudiant.txt",", ");


ecrire_dans_fichier("etudiant.txt",sys);
ecrire_dans_fichier("etudiant.txt","\n");

}


return 0;

}

